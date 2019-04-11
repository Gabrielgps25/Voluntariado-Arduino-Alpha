#include <Ultrasonic.h>
Ultrasonic ultrasonic(9,8); // (Trig PIN,Echo PIN)

void setup() {}

void loop(){
  float medida = ultrasonic.Ranging(CM);
  tone(3, 4000, 100);
  if(medida >= 40){
     delay(2000);
  }else if(medida >= 30){
     delay(1500);
  }else if(medida >= 20){
     delay(1000);
  }else if(medida >= 10){
     delay(500);
  }else{
     delay(200);
  }
}
