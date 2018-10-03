#include <iostream>
#include <stdlib.h>
#include "rectangle.h"
#include "triangle.h"
#include "disc.h"


int main(){
	double longueur, largeur, cote1, cote2, cote3, base, hauteur, pi, rayon;
	longueur = 6;
	largeur = 12;
	cote1 = 22;
	cote2 = 28;
	cote3 = 15;
	base = 33;
	hauteur = 44;
	pi = 3,14;
	rayon = 22,4;
	rectangle a;
	rectangle b;
	triangle c;
	triangle d;
	disc e;
	disc f;

	std::cout<<a.perimetre(longueur,largeur)<<std::endl;
	std::cout<<b.air(longueur,largeur)<<std::endl;

	std::cout<<c.perimetre(cote1,cote2,cote3)<<std::endl;
	std::cout<<d.air(base,hauteur)<<std::endl;

	std::cout<<e.perimetre(pi,rayon)<<std::endl;
	std::cout<<f.air(pi,rayon)<<std::endl;

	return 0;
}
