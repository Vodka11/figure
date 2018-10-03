/*! \lib.h
*ici calcul perimetre air... 
*triangle
*Adrien Heffer
*version 1.0
*/
#pragma once

/*! \class triangle
*voilà la classe de triangle
*/
class triangle 
{
public :
/*! \brief
*\cote1 cote2
*\cote3
*\return cote1 + cote2 + cote3
*/
int perimetre(double cote1, double cote2, double cote3);
/*! \brief
*\base 
*\hauteur
*\return base * hauteur /2
*/
int air(double base, double hauteur);

};
