#include <Adafruit_NeoPixel.h>
  
#define PIN 7

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(120, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
 
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
 // onegreen1red(60);
 // oneredonegreen(5);
 twored2greenminus(50);
 twogreen2redminus(50);
 twored2greenplus(50);
 twogreen2redplus(50);
 
}

void onegreen1red(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0,50,0); //green
    i++;
    strip.setPixelColor(i,50,0,0); //red
    strip.show();
    delay(wait);
  }
}

void oneredonegreen(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,50,0,0); //red
    i++;
    strip.setPixelColor(i,0,50,0); //green
    strip.show();
    delay(wait);
  }
}


void twored2greenminus(int wait) {
  int i;
 for(i=strip.numPixels(); i>0; i--) {
    strip.setPixelColor(i,50,0,0); //red
    i--;
    strip.setPixelColor(i,50,0,0); //red
    i--;
    strip.setPixelColor(i,0,50,0); //green
    i--;
    strip.setPixelColor(i,0,50,0); //red
    strip.show();
    delay(wait);
    }
}

void twogreen2redminus(int wait) {
  int i;
 for(i=strip.numPixels(); i>0; i--) {
    strip.setPixelColor(i,0,50,0); //red
    i--;
    strip.setPixelColor(i,0,50,0); //red
    i--;
    strip.setPixelColor(i,50,0,0); //green
    i--;
    strip.setPixelColor(i,50,0,0); //red
    strip.show();
    delay(wait);
    }
}

void twored2greenplus(int wait) {
  int i;
 for(i=0; i>strip.numPixels(); i++) {
    strip.setPixelColor(i,50,0,0); //red
    i++;
    strip.setPixelColor(i,50,0,0); //red
    i++;
    strip.setPixelColor(i,0,50,0); //green
    i++;
    strip.setPixelColor(i,0,50,0); //red
    strip.show();
    delay(wait);
    }
}

void twogreen2redplus(int wait) {
  int i;
 for(i=0; i>strip.numPixels(); i++) {
    strip.setPixelColor(i,0,50,0); //red
    i++;
    strip.setPixelColor(i,0,50,0); //red
    i++;
    strip.setPixelColor(i,50,0,0); //green
    i++;
    strip.setPixelColor(i,50,0,0); //red
    strip.show();
    delay(wait);
    }
}

