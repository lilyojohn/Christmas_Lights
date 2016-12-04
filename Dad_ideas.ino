void dad_fade(int wait) {
  int i;
  int j;
  for(j=0; j<255; j++) {
    for(i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i,0,j,0); //red
    }
    strip.show();
    delay(wait);
  }
  for(j=255; j>=0; j--) {
    for(i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i,0,j,0); //red
    }
    strip.show();
    delay(wait);
  }

}

void dad_fade2(int wait) {
  int i;
  int j;
  for(j=0; j<255; j++) {
    for(i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i,j,0,0); //red
    }
    strip.show();
    delay(wait);
  }
  for(j=255; j>=0; j--) {
    for(i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i,j,0,0); //red
    }
    strip.show();
    delay(wait);
  }

}
