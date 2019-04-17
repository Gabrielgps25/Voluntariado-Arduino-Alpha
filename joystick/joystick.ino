void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(analogRead(A1) >= 600){
    Serial.println("ESQUERDA");
  }else if(analogRead(A1) <= 400){
    Serial.println("DIREITA");
  }
  if(analogRead(A0) >= 600){
    Serial.println("BAIXO");
  }else if(analogRead(A0) <= 400){
    Serial.println("CIMA");
  }
  if(digitalRead(2) == LOW){
    Serial.println("APERTADO");
  }
  delay(150);
}
