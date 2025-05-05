
int pinoLED1 = 2;

void setup() {      //Essa function tem o objetivo de executar apenas uma vez
  //Definindo o pino 22 que sera de saida
  pinMode(pinoLED1, OUTPUT);
}
   //Função que ficara em loop infinito
void loop() {      //Essa function tem o objetivo de executar
  //Escrevendo no pino digital 22 o valor HIGH
  digitalWrite(pinoLED1, HIGH); //HIGH acender
  delay(500);  //Esta function cria uma pausa de 500ms
  digitalWrite(pinoLED1, LOW);
delay(500);
}
