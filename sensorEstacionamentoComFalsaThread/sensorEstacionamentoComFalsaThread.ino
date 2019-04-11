#include <Ultrasonic.h>
Ultrasonic ultrasonic(9,8); // (Trig PIN,Echo PIN)

unsigned long ultimoBip;

void setup() {}

void loop(){
  float medida = ultrasonic.Ranging(CM);
  int atraso;
  if(medida >= 40){
     atraso = 2000;
  }else if(medida >= 30){
     atraso = 1500;
  }else if(medida >= 20){
     atraso = 1000;
  }else if(medida >= 10){
     atraso = 500;
  }else{
     atraso = 200;
  }

  if(millis() - ultimoBip >= atraso){
    tone(3, 4000, 100);
    ultimoBip = millis();
  }
}
