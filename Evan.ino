void Grandpa(int wait) {
  int i;
  for(i=strip.numPixels(); i>=0; i--) {
    strip.setPixelColor(i,0,50,0); //green
    strip.show();
    delay(wait);
  }
}

void Grandma(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,255,20,147); //pink
    i++;
    strip.setPixelColor(i,255,20,147); //pink
 
    strip.show();
    delay(wait);
  }
}
