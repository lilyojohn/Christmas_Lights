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
Adafruit_NeoPixel strip = Adafruit_NeoPixel(100, PIN, NEO_RGB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

const byte interruptPin=3;
volatile byte mode=0;

void setup() {
  pinMode(interruptPin, INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(interruptPin), change_mode, CHANGE);
  Serial.begin(9600);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {

  Serial.println(mode);
 for (int i=0; i<=10; i++) {
  
  switch(mode=i){
    case 0:erin_redrunning(40);
    break;
    case 1:erin_onered1green(20);
    erin_onegreen1red(20);
    break;
    case 2:twored2greenminus(50);
    twogreen2redminus(50);
    twored2greenplus(50);
    twogreen2redplus(50);
    break;
    case 3:onegreen1red(60);
    oneredonegreen(60);
    break;
    case 4: dad_fade(10);
    dad_fade2(10);
    break;
    case 5:erin_twinkle(50);
    break;
    case 6:cyan_lily(20);
    break;
    case 7: cyan_lilyrandom(50);
    break;
    case 8:intervals_1(40);
    //intervals_2 (40);
    break;
    //default:mode=8;
    //break;
    case 9: Grandpa(50);
    break;
    case 10: Grandma(230);
    break;
    case 11: onegreen1pink(60);
    break;
  }
  }
}

void change_mode() {
  mode++;
  Serial.println("interrupt");
  delay(50);
}


void onegreen1red(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0,50,0); //green
    i++;
    strip.setPixelColor(i,5e0,0,0); //red
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
 for(i=strip.numPixels(); i>=0; i--) {
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
 for(i=strip.numPixels(); i>=0; i--) {
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

