#include <Adafruit_CircuitPlayground.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // this for loop lights up the lights one at a time
  for(int i = 0; i < 10; i++){
    CircuitPlayground.setPixelColor(i, CircuitPlayground.colorWheel(25 * i));
  }
  CircuitPlayground.clearPixels();

  // in another file, write a for loop that plays notes with tones increasing each time
  // up to 5 times
  // hint:
  // for(int i = 0; i < 10; i++){
  //    --play note with frequency 100*(i+1)--
  // }
}
