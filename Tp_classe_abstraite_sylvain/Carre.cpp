#include "Carre.h"

//Constructeurs
CCarre::CCarre(int x, int y, int longueur) :CRectangle(x, y, longueur, longueur)
{
}
CCarre::CCarre(int x, int y):CRectangle(x,y){}

//On récupère ici la longueur d'un coté du carré
int CCarre::getBord() {
	return this->getLargeur();
}

//On instancie la hauteur et la largeur du carré à la même valeur
void CCarre::setBord(int bord) {
	this->setHauteur(bord);
	this->setLargeur(bord);
}

//On affiche les données du carré
void CCarre::dessiner() {
	cout << "carreeeeeeeeeeeeee\n";
	cout << "longueur : " << this->getBord() << "\n";
	cout << "aire : " << this->aire() << " perimetre : " << this->perimetre() << "\n";
}

//Calcul du périmètre du carré
double CCarre::perimetre() {
	return 4 * this->getBord();
}

//Calcul de l'aire du carré
double CCarre::aire() {
	return this->getBord()*this->getBord();
}

//Destructeur
CCarre::~CCarre()
{
}
