#include <iostream>
#include <stdlib.h>
#include "rectangle.h"


int rectangle::perimetre(double longueur, double largeur){
	return ((longueur + largeur) * 2);
}
int rectangle::air(double longueur, double largeur){
	return (longueur * largeur);
}

