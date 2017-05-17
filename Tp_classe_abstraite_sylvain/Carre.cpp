#include "Carre.h"

//Constructeurs
CCarre::CCarre(int x, int y, int longueur) :CRectangle(x, y, longueur, longueur)
{
}
CCarre::CCarre(int x, int y):CRectangle(x,y){}

//On r�cup�re ici la longueur d'un cot� du carr�
int CCarre::getBord() {
	return this->getLargeur();
}

//On instancie la hauteur et la largeur du carr� � la m�me valeur
void CCarre::setBord(int bord) {
	this->setHauteur(bord);
	this->setLargeur(bord);
}

//On affiche les donn�es du carr�
void CCarre::dessiner() {
	cout << "carreeeeeeeeeeeeee\n";
	cout << "longueur : " << this->getBord() << "\n";
	cout << "aire : " << this->aire() << " perimetre : " << this->perimetre() << "\n";
}

//Calcul du p�rim�tre du carr�
double CCarre::perimetre() {
	return 4 * this->getBord();
}

//Calcul de l'aire du carr�
double CCarre::aire() {
	return this->getBord()*this->getBord();
}

//Destructeur
CCarre::~CCarre()
{
}
