#include <iostream>
#include <stdlib.h>
#include "disc.h"


int disc::perimetre(double pi, double rayon){
	return (2 * pi * rayon);
}
int disc::air(double pi, double rayon){
	return (2 * (rayon * rayon));
}

