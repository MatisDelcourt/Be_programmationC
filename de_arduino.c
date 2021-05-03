void afficheDe(int nombre){

  if(nombre==1){
    for (int i=0;i<NUM_LEDS;i++) {
      if (i==0)
        leds.setColorRGB(i,255,0,0);
      else
        leds.setColorRGB(i,0,0,0);
    }
  }

  if(nombre==2){
    for (int i=0;i<NUM_LEDS;i++) {
      if (i==1 | i==2)
        leds.setColorRGB(i,255,0,0);
      else
        leds.setColorRGB(i,0,0,0);
    }
  }

  if(nombre==3){
    for (int i=0;i<NUM_LEDS;i++) {
      if (i==0 | i==1 | i==2)
        leds.setColorRGB(i,255,0,0);
      else
        leds.setColorRGB(i,0,0,0);
    }
  }

  if(nombre==4){
    for (int i=0;i<NUM_LEDS;i++) {
      if (i==0 | i==5 | i==6)
        leds.setColorRGB(i,0,0,0);
      else
        leds.setColorRGB(i,255,0,0);
    }
  }

  if(nombre==5){
    for (int i=0;i<NUM_LEDS;i++) {
      if (i==5 | i==6)
        leds.setColorRGB(i,0,0,0);
      else
        leds.setColorRGB(i,255,0,0);
    }
  }

  if(nombre==6){
    for (int i=0;i<NUM_LEDS;i++) {
      if (i==0)
        leds.setColorRGB(i,0,0,0);
      else
        leds.setColorRGB(i,255,0,0);
    }
  }

}

void eteintDe(){
  for(int i=0;i<NUM_LEDS;i++){
     leds.setColorRGB(i, 0, 0, 0);
  }
}
