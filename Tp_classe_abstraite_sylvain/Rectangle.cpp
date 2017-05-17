#include "Rectangle.h"


//Constructeurs
CRectangle::CRectangle(int abs, int ord, int largeur, int hauteur):CFigure(abs, ord)
{
	this->m_largeur = largeur;
	this->m_hauteur = hauteur;
}
CRectangle::CRectangle(int abs, int ord):CFigure(abs, ord){}

//On récupère la largeur du rectangle
int CRectangle::getLargeur() const {
	return m_largeur;
}

//On récupère la hauteur du rectangle
int CRectangle::getHauteur() const {
	return m_hauteur;
}

//Instanciation de la largeur du rectangle
void CRectangle::setLargeur(int largeur) {
	this->m_largeur = largeur;
}

//Instanciation de la hauteur du rectangle
void CRectangle::setHauteur(int hauteur) {
	this->m_hauteur = hauteur;
}

//Affichage des données du rectangle
void CRectangle::dessiner() {
	cout << "rectangleeeeee\n";
	cout << "largeur : " << this->m_largeur << " longueur : " << this->m_hauteur <<"\n";
	cout << "perimetre : " << this->perimetre() << " aire : " << this->aire() << "\n";
}

//Calcul du périmètre du rectangle
double CRectangle::perimetre() {
	return 2 * (this->m_largeur + this->m_hauteur);
}

//Calcul de l'aire du rectangle
double CRectangle::aire() {
	return(this->m_largeur*this->m_hauteur);
}

//Destructeur
CRectangle::~CRectangle()
{
}
