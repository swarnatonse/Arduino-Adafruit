#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();

}

void lights(int color){
  CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(1, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(2, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(3, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(4, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(5, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(6, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(7, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(8, CircuitPlayground.colorWheel(color));
  CircuitPlayground.setPixelColor(9, CircuitPlayground.colorWheel(color));
}

void loop() {
  // put your main code here, to run repeatedly:
  //CircuitPlayground.clearPixels();
  
  if(CircuitPlayground.readCap(1) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(262, 250);
    lights(random(256));
  }
  if(CircuitPlayground.readCap(0) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(294, 250);
    lights(random(256));
  }
  if(CircuitPlayground.readCap(2) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(330, 250);
    lights(random(256));
  }

  if(CircuitPlayground.readCap(3) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(349, 250);
    lights(random(256));
  }

  if(CircuitPlayground.readCap(10) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(392, 250);
    lights(random(256));
  }

  if(CircuitPlayground.readCap(9) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(440, 250);
    lights(random(256));
  }

  if(CircuitPlayground.readCap(6) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(494, 250);
    lights(random(256));
  }

  if(CircuitPlayground.readCap(12) > 100)
  {
    CircuitPlayground.clearPixels();
    CircuitPlayground.playTone(349, 250);
    lights(random(256));
  }

}

  


