#include <Adafruit_CircuitPlayground.h>

uint16_t lightValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
}

void loop() {
  // lightValue gets value from light sensor
  lightValue = CircuitPlayground.lightSensor();
  
  //if light is too bright play high tone
  if (lightValue > 1000) { 
      CircuitPlayground.playTone(2000, 2000);
   }
   //if light is not too bright but not too dark play intermediate tone
   else if(lightValue > 500){ 
      CircuitPlayground.playTone(500, 2000);
   }
   //if light is not bright enough play low tone
   else{
      CircuitPlayground.playTone(100, 2000);
   }
}
