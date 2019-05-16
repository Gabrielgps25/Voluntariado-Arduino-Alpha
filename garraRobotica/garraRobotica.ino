#include <Servo.h>
Servo servo;
Servo servo1;
Servo garra;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, INPUT_PULLUP);
  servo.attach(9);
  servo1.attach(10);
  garra.attach(11);
}

void loop() {
  servo.write(map(analogRead(A0), 0, 1023, 50, 180));
  servo1.write(map(analogRead(A1), 0, 1023, 50, 180));
  garra.write(digitalRead(2) == 1 ? 130 : 180);
}
