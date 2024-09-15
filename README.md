# Mini Indústria - Robótica

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



## Implementação
No início do projeto, houve a compra de um kit de um braço robótico em acrílico. Contudo, através da montagem do mesmo, foi detetado diversas anomalias que iam afetar diretamente o devido funcionamento. Sendo assim, efetuei uma análise pormenorizada para solucionar os problemas apresentados no decorrer da montagem. Estes problemas incidiam na parte estrutural, uma vez que toda a estrutura do robô estava afixada no eixo de um motor servo e apresentava algumas peças partidas.
Sendo assim, para criar as estruturas necessárias, utilizou-se a impressora 3D, capaz de fabricar peças personalizadas (tridimensionais e feitas de plástico bastante resistente). 
Assim, para melhorar o desempenho do robô, tive de recorrer à ferramenta anteriormente referia, sendo capaz de resolvê-los. Assim projetaram-se peças com recurso ao FUSION 360.

Nota: Para obter as medidas das peças desejadas necessitei de um paquímetro. 

## Conclusão

Em suma, o projeto foi bem concebido, uma vez que o objetivo inicial de fazer uma secção de indústria foi cumprido. Para além disso, o projeto pode apresentar diferente configurações tornando-o mais autónomo ou mais interativo. A configuração apresentada do robô é mais interativa devido ao objetivo final de apresentar a qualquer faixa etária. Sendo assim, o único pormenor que não foi realizado foi outra configuração mais autónoma em que o braço robótico e a passadeira comunicassem entre si. 