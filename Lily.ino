void cyan_lily(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0,255,255); //
    strip.show();
    delay(wait);
    wait+=1;
  }
}

void cyan_lilyrandom(int wait) {
  
    strip.setPixelColor(random(0,120), 0,255,255); //
    strip.show();
    delay(wait);
  
}




void intervals_1(int wait) {
  int i,j;
  int red=255;
  int green=0;
  
  for(j=0; j<2; j++)
  {
    for(i=0; i<strip.numPixels();) {
      strip.setPixelColor(i,red,green,0);
       i++; 
      strip.setPixelColor(i,0,0,0); 
      i++;
      strip.show();
      delay(wait);
      //wait+=1;
    }
    red=0;
    green=255;
}

//void intervals_2(int wait) {
//  int i;
  for(i=1; i<strip.numPixels();) {
    strip.setPixelColor(i,0,255,0);
     i++;
     strip.setPixelColor(i,255,0,0); 
    i++;
    strip.show();
    delay(wait);
    //wait+=1;
  }
}

void onegreen1pink(int wait) {
  int i;
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0,50,0); //green
    i++;
    strip.setPixelColor(i,255,192,203); //pink
    strip.show();
    delay(wait);
  }
}

