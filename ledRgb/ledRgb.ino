#define red 9
#define green 10
#define blue 11
void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()){
    char c = Serial.read();

    //Agora devemos verificar o caractere passado pelo usuário e inverter o estado do pino
    //correspondente ao canal escolhido, para isso validaremos com a estrutura switch - case
    switch(c){
      case 'R': // verificando se o caractere é R
        digitalWrite(red, !digitalRead(red)); // Fazendo a inversão do Red
        break; // Comando para parada do switch (se R não compara os demais casos)
      case 'G':
        digitalWrite(green, !digitalRead(green));
        break;
      case 'B':
        digitalWrite(blue, !digitalRead(blue));
        break;
    }
  }
}
