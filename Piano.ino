#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  //CircuitPlayground.clearPixels();
  
  if(CircuitPlayground.readCap(3) > 200)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(440, 250);
    CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(25));
  }
  if(CircuitPlayground.readCap(2) > 200)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(450, 250);
    CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(75));
  }
  if(CircuitPlayground.readCap(0) > 200)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(460, 250);
    CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(45));
  }

}
