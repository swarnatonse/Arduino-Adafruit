#include <Adafruit_CircuitPlayground.h>

float tempC, tempF;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  tempC = CircuitPlayground.temperature();
  Serial.println(tempC);
  if( tempC > 33 ){
    while( !(CircuitPlayground.leftButton() || CircuitPlayground.rightButton()) ){
      CircuitPlayground.playTone(500, 250);
      CircuitPlayground.playTone(600, 250);
      Serial.println(tempC);
      Serial.println("Inside Loop");
    }
    delay(3000);
  }
}
