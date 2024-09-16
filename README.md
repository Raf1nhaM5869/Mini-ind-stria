# Mini Indústria - Robótica
<div align="center">
  <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/robo.png" alt="invited">
</div>


## Realizador
- Rafael Melo (up202405969@fe.up.pt)

## Introdução ao projeto

No ano letivo 2023/2024, no seguimento da apresentação de atividades de Física no Dia da Ciência (24 de novembro), decidi continuar a divulgação de novos trabalhos. Assim, resolvi fazer um projeto que unia diversas áreas científicas, desde a mecânica, eletrónica e informática.
O projeto consiste na simulação do funcionamento de uma secção da indústria, utilizando um braço mecânico e uma passadeira rolante, com os respetivos motores e circuitos, tendo também em conta a sustentabilidade do projeto, que reutilizou materiais, dando-lhes novo uso.
O principal objetivo foi simular uma linha de montagem, que através da união das áreas anteriormente referias, foi possível criar uma passadeira rolante e um pequeno robô, capazes de transportar objetos, através de um comando de PlayStation 3.


## Objetivo do projeto
Na elaboração do projeto, tive como objetivo criar um braço robótico capaz de movimentar um objeto através de motores servos e uma passadeira que transporta um objeto de uma forma estável e rápida.  
Sendo assim, com a criação da passadeira rolante e do braço robótico o funcionamento deveria ser o seguinte: o produto fabricado chegava ao início da passadeira rolante, e este ia percorrer até alcançar o final da mesma. Logo a seguir, o produto para e o robô está pronto a pegá-lo e deslocá-lo para o local desejado. 
Quando o robô pega no produto, este é controlado através de um comando de PlayStation 3, em que os analógicos são usados para obter maior precisão, no decorrer da tarefa. 

## Materiais utilizados
### Braço Robótico 
- `4 motores servo`
  - Os motores servos foram utilizados para articular o braço robótico.  
- `Estrutura do braço em acrílico`

- `Comando de PlayStation 3` 
   - Através do comando de PlayStation , o utilizador consegue controlar o robô, movendo os analógicos, enviando os dados através de Bluetooth para o ESP32.

- `ESP32`
   - O ESP32 permite a comunicação entre o comando PlayStation 3 e os motores servos, permitindo a coordenação entre ambos. 
- `Fio de ligação`

### Passadeira Rolante
- `Borracha`
- `Dois Cilindros de Plástico` 
- `2 Motores de Passo` 
  - Os motores de passos permitem movimentação da passadeira rolante. 
- `Arduíno Uno`
  - O Arduíno Uno permite controlar a velocidade dos motores de passo enviado dados para o módulo L298N e obtém informação através do sonar.
- `Fios de Ligação` 
- `Sonar`

### Equipamento extra
- `Impressora 3D`
  - A impressora 3D permitiu imprimir todas as peças. Assim, obtendo um melhor desempenho no projeto. A marca da impressora é TWO TREES
- `Equipamento de Solda`
- `Multímetro`
- `Transformadores` 
- `Paquímetro`
- `Topia`
### Software 
- `Arduíno IDE`
  - O Arduíno IDE foi o utilizado para programar todos os componentes, como por exemplo, o ESP32, Arduíno Uno, sonar, motores, etc. A linguagem utilizada foi o C++.

- `Fusion 360` 
  - O fusion 360 é um programa de design 3D capaz de satisfazer as necessidades do projeto, uma vez que é possível fazer peças em 3D de uma forma rápida e precisa. Para além disso, no final do projeto, obtenho o ficheiro em STL, possibilitando a sua impressão. 
- `Ultimaker Cura`
  - O Ultimaker Cura é um programa que ajuda a conectar a impressora 3D e definir as características de impressão de cada peça. Através deste software, consegue-se mudar a temperatura de bico de impressão, percentagem de preenchimento, altura do bico ao prato de impressão, velocidade, etc.
- `Fritzing`
  - O Fritzing foi usado para fazer o rascunho dos circuitos elétricos.

<div style="white-space: nowrap;">
  <a href="https://www.arduino.cc/en/software">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/download%20(3).png" width="200" style="display: inline-block;" />
  </a>

  <a href="https://www.autodesk.com/">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/download.png" width="200" style="display: inline-block;" />
  </a>

  <a href="https://ultimaker.com/">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/download%20(1).png" width="200" style="display: inline-block;" />
  </a>

  <a href="https://fritzing.org/">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/download%20(2).png" width="200" style="display: inline-block;" />
  </a>
</div>

## Implementação
No início do projeto, houve a compra de um kit de um braço robótico em acrílico. Contudo, através da montagem do mesmo, foi detetado diversas anomalias que iam afetar diretamente o devido funcionamento. Sendo assim, efetuei uma análise pormenorizada para solucionar os problemas apresentados no decorrer da montagem. Estes problemas incidiam na parte estrutural, uma vez que toda a estrutura do robô estava afixada no eixo de um motor servo e apresentava algumas peças partidas.
Sendo assim, para criar as estruturas necessárias, utilizou-se a impressora 3D, capaz de fabricar peças personalizadas (tridimensionais e feitas de plástico bastante resistente). 
Assim, para melhorar o desempenho do robô, tive de recorrer à ferramenta anteriormente referia, sendo capaz de resolvê-los. Assim projetaram-se peças com recurso ao FUSION 360.

Nota: Para obter as medidas das peças desejadas necessitei de um paquímetro. 
## Peças fabricadas para o braço robótico
### Esta peça é um suporte do braço robótico
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/suporte_base.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/pe%C3%A7a1.3d.png" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231211_163835.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231211_163835.jpg" alt="Imagem 2" width="200"/>
  </a>
</p>

### Suporte da garra à restante estrutura
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/suport_cabe%C3%A7a2.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/pe%C3%A7a2.3d.png" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/suport_cabe%C3%A7a.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/pe%C3%A7a3.d.png" alt="Imagem 2" width="450"/>
  </a>
</p>

<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143653.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143653.jpg" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143512.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143512.jpg" alt="Imagem 2" width="450"/>
  </a>
</p>

### Disco da Base
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/suport_disco_robo.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/disco_3d.png" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231218_215923.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231218_215923.jpg" alt="Imagem 2" width="280"/>
  </a>
</p>


### Base do robô

<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/base.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/base_3d.png" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231217_211504.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231217_211504.jpg" alt="Imagem 2" width="280"/>
  </a>
</p>

Logo após a criação das peças no fusion 360, estas foram impressas na impressora 3D. Depois de finalizar a impressão 3D, houve a montagem de todas as peças. Antes / depois, respetivamente.

<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231128_140823.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20231128_140823.jpg" alt="Base 3D" width="425"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240115_205545.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240115_205545.jpg" alt="Imagem 2" width="340"/>
  </a>
</p>

### Instalação do circuito elétrico do robô
 <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/robo_circuito.png" alt="invited">

## Peças fabricadas para a passadeira rolante
Na passadeira rolante houve também a necessidade de recorrer ao uso da impressão 3D, para obter estabilidade e mobilidade do tapete. Sendo assim, fiz quatro peças que são as seguintes:

### Espaçador
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/roda.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/image.png" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240428_230101.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240428_230101.jpg" alt="Imagem 2" width="310"/>
  </a>
</p>

Esta peça foi impressa duas vezes para bloquear a movimentação do rolo de plástico (na horizontal) para não alterar a trajetória.
### Disco Protetor
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/disco_protect.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/image1.png" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143739.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143739.jpg" alt="Imagem 2" width="350"/>
  </a>
</p>

Esta peça foi impressa duas vezes. O objetivo desta peça é igual ao da figura 1, mas também tem outro objetivo que é protege os motores, caso o tapete rolante altere a trajetória.
### Rolo Giratório
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/rolo_giratorio.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/imagem2.png" alt="Base 3D" width="450"/>
</p>

Esta peça estabelece a ligação entre os motores de passo e a passadeira, transmitindo-lhe movimento. Esta tem uma lixa tem toda a sua volta, para ter maior atrito entre a peça e a borracha, obtendo maior eficiência.

### Suporte do sonar
<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/objetos%203d/suporte_sonar.stl">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/imagem3.PNG" alt="Base 3D" width="450"/>
  </a>
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143821.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240914_143821.jpg" alt="Imagem 2" width="350"/>
  </a>
</p>

Esta peça é um suporte do sensor ultrassónico para possibilitar a deteção o objeto.

Após a impressão das peças, houve a montagem. 

<p align="center">
  <a href="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240916_205601.jpg">
    <img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/IMG_20240916_205601.jpg" alt="Base 3D" width="500"/>
</p>

### Instalação do circuitos elétricos da passadeira rolante

<img src="https://github.com/Raf1nhaM5869/Mini-industria/blob/main/src/asseats/passadeira_circuito.png" alt="invited">

## Conclusão

Em suma, o projeto foi bem concebido, uma vez que o objetivo inicial de fazer uma secção de indústria foi cumprido. Para além disso, o projeto pode apresentar diferente configurações tornando-o mais autónomo ou mais interativo. A configuração apresentada do robô é mais interativa devido ao objetivo final de apresentar a qualquer faixa etária. Sendo assim, o único pormenor que não foi realizado foi outra configuração mais autónoma em que o braço robótico e a passadeira comunicassem entre si. 
