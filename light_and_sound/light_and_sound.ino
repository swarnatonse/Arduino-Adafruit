#include <Adafruit_CircuitPlayground.h>

uint8_t light_color;
uint8_t note;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  light_color = 123; //choose a number between 0 and 255
  CircuitPlayground.setPixelColor(0, CircuitPlayground.colorWheel(light_color));
  // in the previous line, try changing the 0 to a number from 1 to 9 and see what happens
  
  note = 349; //choose a number between 262 and 440
  CircuitPlayground.playTone(note, 250);
  // in the previous line, the note will play for a duration of 250 milliseconds
  // try declaring a variable named 'duration' and assign it a value of more than 250
  // and then replace the 250 with the variable duration
}
