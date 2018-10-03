/*! \lib.h
*ici calcul perimetre air... 
*disque
*Adrien Heffer
*version 1.0
*/
#pragma once

/*! \class disc
*voilà la classe de disc
*/
class disc
{
public :
/*! \brief
*\pi
*\rayon
*\return 2 * pi * rayon
*/
int perimetre(double pi, double rayon);
/*! \brief
*\pi
*\rayon
*\return pi * (rayon * rayon)
*/
int air(double pi, double rayon);

};
