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
- `Arduíno Uno`
- `Fios de Ligação` 
- `Sonar`

### Equipamento extra
- `Impressora 3D`
- `Equipamento de Solda`
- `Multímetro`
- `Transformadores` 
- `Paquímetro`
- `Topia` (máquina)
### Software 
- `Arduíno IDE`
- `Fusion 360`
- `Ultimaker Cura`
- `Fritzing`







## Implementação
No início do projeto, houve a compra de um kit de um braço robótico em acrílico. Contudo, através da montagem do mesmo, foi detetado diversas anomalias que iam afetar diretamente o devido funcionamento. Sendo assim, efetuei uma análise pormenorizada para solucionar os problemas apresentados no decorrer da montagem. Estes problemas incidiam na parte estrutural, uma vez que toda a estrutura do robô estava afixada no eixo de um motor servo e apresentava algumas peças partidas.
Sendo assim, para criar as estruturas necessárias, utilizou-se a impressora 3D, capaz de fabricar peças personalizadas (tridimensionais e feitas de plástico bastante resistente). 
Assim, para melhorar o desempenho do robô, tive de recorrer à ferramenta anteriormente referia, sendo capaz de resolvê-los. Assim projetaram-se peças com recurso ao FUSION 360.


