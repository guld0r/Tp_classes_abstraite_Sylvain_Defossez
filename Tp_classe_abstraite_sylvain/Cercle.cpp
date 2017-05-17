#include "Cercle.h"
#define _USE_MATH_DEFINES
#include <math.h>

//Constructeurs
CCercle::CCercle(int abs, int ord, int radius):CFigure(abs, ord)
{
	this->m_radius = radius;
}
CCercle::CCercle(int abs, int ord):CFigure(abs,ord){}

//On récupère le rayon du cercle
int CCercle::getRadius() const {
	return m_radius;
}

//Instancier un rayon au cercle
void CCercle::setRadius(int radius)  {
	this->m_radius = radius;
}

//On affiche les données du cercle
void CCercle::dessiner() {
	cout << "cercleeeeeeeeeeeeee\n";
	cout << "rayon : " << this->m_radius << "\n";
	cout << "perimetre : " << this->perimetre() << " aire : " << this->aire() << "\n";
}

//Calcul de la circonférence du cercle
double CCercle::perimetre() {
	return 2 * M_PI*this->m_radius;
}

//Calcul de l'aire du cercle
double CCercle::aire() {
	return M_PI*(this->m_radius^2);
}

//Destructeur
CCercle::~CCercle()
{
}
