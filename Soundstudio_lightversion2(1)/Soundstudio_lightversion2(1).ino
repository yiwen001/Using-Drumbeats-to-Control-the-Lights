#include<Adafruit_NeoPixel.h>

#define LED_COUNT 174
#define Pin 13

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, Pin, NEO_GRB + NEO_KHZ800);

int brightness = 0;
int blue = 0;
int red=0;
int green=0;

int inByte = 0;
char buffer[40];
int index = 0;
int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  leds.begin();
  clearLEDs();
}

void loop() {

  if(Serial.available()){
    value = Serial.read();
  }

  if (value >= 0 && value < 127) {
    brightness = value*2;
  }

  if (value >= 127 && value < 256) {
    blue = (value*2)-256;
    green = random(0,250);
  }

  for (int i = 0; i < LED_COUNT; i++) {
    leds.setPixelColor(i, 50, green, blue);
    leds.setBrightness(brightness);
  }
   leds.show();
  delay(5);
}


void clearLEDs(){
  for (int i = 0; i < LED_COUNT; i++) {
    leds.setPixelColor(i, 10);
    leds.show();
  }
}
