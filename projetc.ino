#include <math.h>
#include <ChainableLED.h>

#define NUM_LEDS 7

ChainableLED leds(13, 15, NUM_LEDS);

const int ECART = 100;
const int TEMPO = 500;
int a;
int luminosity1;
int luminosity2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//  randomSeed(analogRead(1));
//
    leds.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  int luminosity1 = analogRead(0);
  Serial.println(luminosity1);
  delay(1000);
  int luminosity2 = analogRead(0);
  Serial.println(luminosity2);

  if (luminosity1-luminosity2 > ECART) { //si l'écart entre les deux valeurs est suffisante, alors on lance le dé
    eteintDe();
    Serial.println("Dé lancé");
    score=random(1,7); //valeur random entre 1 et 6
    Serial.println("Valeur du dé : ");
    Serial.println(score);
    afficheDe(score);
  }
}

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
