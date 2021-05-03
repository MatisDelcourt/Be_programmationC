#pragma once
#include <math.h>
#include <ChainableLED.h>

class de
{
public:
	de();
	void majde();
 void affichede(int nombre);
 void eteintde();
	int valde;

  private:
  NUM_LEDS = 7;

  ChainableLED leds(13, 15, NUM_LEDS);

const int ECART = 100;
const int TEMPO = 500;
int luminosity1;
int luminosity2;

};
