#include <Adafruit_CircuitPlayground.h>

float tempC;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  tempC = CircuitPlayground.temperature();
  Serial.println(tempC);
  if( tempC > 33 ){
    // If temperature is above 33 degree celsius then the playground should 
    // keep beeping till the left button or the right button is pressed
    while( !(CircuitPlayground.leftButton() || CircuitPlayground.rightButton()) ){
      // Can you figure out what the condition inside the while loop means?
      CircuitPlayground.playTone(500, 250);
      CircuitPlayground.playTone(600, 250);
      Serial.println(tempC);
      Serial.println("Inside Loop");
    }
    delay(3000);
  }
}
