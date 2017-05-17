#include "Figure.h"

//Constructeurs
CFigure::CFigure(int abs, int ord)
{
	this->m_x = abs;
	this->m_y = ord;
}
CFigure::CFigure(){}

//On r�cup�re l'abscisse du point
int CFigure::getX() const {
	return m_x;
}

//On r�cup�re l'ordonn�e du point
int CFigure::getY() const {
	return m_y;
}

//Instanciation de l'abscisse du point
void CFigure::setX(int x)
{
	this->m_x = x;
}

//Instanciation de l'ordonn�e du point
void CFigure::setY(int y)
{
	this->m_y = y;
}

//Affichage des coordonn�es du point
void CFigure::dessiner() {
	cout << "Coordonnees : " << m_x << " " << m_y << "\n";
}

//Fonction de calcul du p�rim�tre de la classe abstraite
double CFigure::perimetre() {
	return 0.0;
}

//Fonction de calcul de l'aire de la classe abstraite
double CFigure::aire() {
	return 0.0;
}

//Destructeur
CFigure::~CFigure()
{
}
