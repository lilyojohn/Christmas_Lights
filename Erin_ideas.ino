void erin_onegreen1red(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0,50,0); //green
    i++;
    strip.setPixelColor(i,50,0,0); //red
    strip.show();
    //delay(wait);
  }
}

void erin_onered1green(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,50,0,0); //red
    i++;
    strip.setPixelColor(i,0,50,0); //green
    strip.show();
    //delay(wait);
  }
}

void erin_redrunning(int wait) {    
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0,50,0); //green
  }
  strip.show();

  int j;
  j=strip.numPixels()-1;
 
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,140,0,0); //red
    strip.setPixelColor(i-1,200,12,12); //red
    strip.setPixelColor(i-2,245,18,18); //red
    strip.setPixelColor(i-3,242,118,118); //red
    strip.setPixelColor(i-4,0,50,0); //green
    
    strip.show();
    delay(wait);
  }
  
}

void erin_redrunning2(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    //strip.setPixelColor(i,50,0,0); //red
    //i++;
    strip.setPixelColor(i,0,50,0); //green
    strip.show();
    //delay(wait);
  }
}

void erin_twinkle(int wait) {
  int i;
  int twinkleBrightness;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,1,1,48); //darkblue
  }
  twinkleBrightness = random(10,45);  
    strip.setPixelColor(20,twinkleBrightness,twinkleBrightness,twinkleBrightness); //twinkle
  twinkleBrightness = random(10,45);  
    strip.setPixelColor(40,twinkleBrightness,twinkleBrightness,twinkleBrightness); //twinkle 
  twinkleBrightness = random(10,45);  
    strip.setPixelColor(60,twinkleBrightness,twinkleBrightness,twinkleBrightness); //twinkle
  twinkleBrightness = random(10,45);  
    strip.setPixelColor(80,twinkleBrightness,twinkleBrightness,twinkleBrightness); //twinkle
    strip.setPixelColor(100,twinkleBrightness,twinkleBrightness,twinkleBrightness); //twinkle
  twinkleBrightness = random(10,45);  
    strip.setPixelColor(120,twinkleBrightness,twinkleBrightness,twinkleBrightness); //twinkle
    strip.show();
    //delay(wait);
  
}


