#include <Ps3Controller.h> 
#include <ESP32Servo.h>

Servo servoL;
Servo servoR;
Servo servoB;
Servo servoC;

int rX;
int rY;
int lX;
int lY;

int posR = 90;
int posL = 90;
int posB = 90;
int posC = 90;

void notify()
{
   lX =(Ps3.data.analog.stick.lx);
   lY =(Ps3.data.analog.stick.ly);
   rX =(Ps3.data.analog.stick.rx);
   rY =(Ps3.data.analog.stick.ry);
   Serial.print(lX);
    Serial.println();
   Serial.print(lY);
    Serial.println();
   Serial.print(rX);
    Serial.println();
   Serial.print(rY);
   if (lY < -50 && posR<180) {
     posR++;
     servoR.write(posR);
     delay(10);
   }
   if (lY > 50 && posR>0) {
     posR--;
     servoR.write(posR);
     delay(10);
   }

   if (rY < -50 && posL<180) {
     posL++;
     servoL.write(posL);
     delay(10);
   }
   if (rY > 50 && posL>0) {
     posL--;
     servoL.write(posL);
     delay(10);
   }
   if (rX < -50 && posB<180) {
     posB++;
     servoB.write(posB);
     delay(10);
   }
   if (rX > 50 && posB>0) {
     posB--;
     servoB.write(posB);
     delay(10);
   }

   if( abs(Ps3.event.analog_changed.button.r2)>50 && posC > 0 ){
     Serial.print("Pressing the right trigger button: ");
     Serial.println(Ps3.data.analog.button.r2, DEC);
     posC--;
     if (posC<1 ) {
        posC=1;
     }
     servoC.write(posC);
     delay(10); 
   }

   if( abs(Ps3.event.analog_changed.button.l2)>50 && posC < 180 ){
     Serial.print("Pressing the left trigger button: ");
     Serial.println(Ps3.data.analog.button.l2, DEC);
     posC++;
     if (posC>179) {
        posB=179;
     }
     servoC.write(posC);
     delay(10);
   }
   
   if( abs(Ps3.event.analog_changed.button.right)>50  && posB>0 ){
       Serial.print("Pressing the right button: ");
       Serial.println(Ps3.data.analog.button.right, DEC);
       posB--;
       if (posB<1 ) {
        posB=1;
       }
       servoB.write(posB);       
       delay(10);
   }

   if( abs(Ps3.event.analog_changed.button.left)>50 && posB<180 ){
       Serial.print("Pressing the left button: ");
       Serial.println(Ps3.data.analog.button.left, DEC);
       posB++;
       if (posB>179) {
        posB=179;
       }
       servoB.write(posB);
       delay(10);   
   }      
 
}

void onConnect(){
   Serial.println("Connected.");
}

void setup() {
    Serial.begin(115200);
    Ps3.attach(notify);
    Ps3.attachOnConnect(onConnect);
    Ps3.begin("fc:b4:67:92:1b:46");
    servoL.attach(25);
    servoR.attach(26);
    servoB.attach(27);
    servoC.attach(33);    
    servoL.write(posL);
    servoR.write(posR);
    servoB.write(posB);
    servoC.write(posC);
}

void loop() {
    if (!Ps3.isConnected()) {
      return;
    }
    if( Ps3.data.button.l2 && Ps3.data.button.r2 )
        Serial.println("Pressing both the left and right trigger buttons");       
 
    delay(2000);
}
