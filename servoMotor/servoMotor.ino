#include <Servo.h>
Servo servo;

void setup() {
  pinMode(A0, INPUT);
  servo.attach(5);
}

void loop() {
  servo.write(map(analogRead(A0), 0, 1023, 50, 180));
}
