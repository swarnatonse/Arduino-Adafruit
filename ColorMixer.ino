#include <Adafruit_CircuitPlayground.h>

uint8_t activated = 0;
uint8_t rgb = 0;
uint8_t c_red = 0;
uint8_t c_green = 0;
uint8_t c_blue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  CircuitPlayground.setPixelColor(8, 255, 0, 0);
  CircuitPlayground.setPixelColor(6, 0, 255, 0);
  CircuitPlayground.setPixelColor(3, 0, 0, 255);
  //CircuitPlayground.setPixelColor(1, 255, 255, 255);
  if(CircuitPlayground.readCap(9) > 200 || CircuitPlayground.readCap(10) > 200)
  {
    rgb = 100;
    Serial.println("Red pressed!");
  }
  if(CircuitPlayground.readCap(12) > 200 || CircuitPlayground.readCap(6) > 200)
  {
    rgb = 10;
    Serial.println("Green pressed!");
  }
  if(CircuitPlayground.readCap(0) > 200 || CircuitPlayground.readCap(1) > 200)
  {
    rgb = 1;
    Serial.println("Blue pressed!");
  }
  if(CircuitPlayground.readCap(2) > 200 || CircuitPlayground.readCap(3) > 200)
  {
    if(activated == 0){
      Serial.println("Here!");
      switch(rgb){
        case 100: CircuitPlayground.setPixelColor(1, 255, 0, 0);
        c_red = 255;
        break;
        case 10: CircuitPlayground.setPixelColor(1, 0, 255, 0);
        c_green = 255;
        break;
        case 1: CircuitPlayground.setPixelColor(1, 0, 0, 255);
        c_blue = 255;
        break;
      }
      activated = 1;
    }
    else{
      Serial.println("Or here!");
      switch(rgb){
        case 100: c_red = (c_red+255)/2;
        break;
        case 10: c_green = (c_green+255)/2;
        break;
        case 1: c_blue = (c_blue+255)/2;
        break;
      }
      CircuitPlayground.setPixelColor(1, c_red, c_green, c_blue);
    }
  }

}
