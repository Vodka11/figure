/*! \lib.h
*ici calcul perimetre air... 
*rectangle
*Adrien Heffer
*version 1.0
*/
#pragma once

/*! \class propriete
*voilà la classe de propriete
*/
class rectangle
{
public :
/*! \brief
*\longueur
*\largeur
*\return longueur + largeur * 2
*/
int perimetre(double longueur, double largeur);
/*! \brief
*\longueur
*\largeur
*\return longueur * largeur
*/
int air(double longueur, double largeur);

};
