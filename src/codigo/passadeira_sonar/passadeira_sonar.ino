#define m1a 6
#define m1b 9
#define m2a 10
#define m2b 11
#define tmp 3000

int vel=100;


long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);
  
  pinMode(0, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  tone(0, 523, 1000); // play tone 60 (C5 = 523 Hz)
  Serial.println(0.01723 * readUltrasonicDistance(5, 4));
  if (0.01723 * readUltrasonicDistance(5, 4) < 10) {
    vel=0;
    analogWrite(m1a,vel);
    analogWrite(m1b,vel);
    analogWrite(m2a,vel);
    analogWrite(m2b,vel);

  } else {
    vel=100;
    analogWrite(m1a,vel);
    analogWrite(m1b,vel);
    analogWrite(m2a,vel);
    analogWrite(m2b,vel);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
