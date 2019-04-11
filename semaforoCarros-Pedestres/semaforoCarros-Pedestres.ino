void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(7, INPUT);
}

void loop() {
    semaforoCarros();
    if(digitalRead(7) == HIGH){
      semaforoPedestres();
    }
}

void semaforoPedestres(){
    digitalWrite(13, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    delay(2500);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
}
void semaforoCarros(){
    digitalWrite(13, LOW);
    digitalWrite(3, HIGH); //Fechando o semaforo de pedestre
    digitalWrite(11, HIGH);  //Abre o semaforo de carros (led verde)
    delay(2000);
    digitalWrite(11, LOW); //Troca o semaforo de carros (apaga o led verde e liga o amarelo)
    digitalWrite(12, HIGH);
    delay(1500);
    digitalWrite(12, LOW);//Fecha o semaforo de carros (desliga o led amarelo e liga o vermelho)
    digitalWrite(13, HIGH);
    delay(1500);
}
