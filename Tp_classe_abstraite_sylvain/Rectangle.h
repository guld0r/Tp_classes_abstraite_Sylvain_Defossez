#pragma once
#include "figure.h"

class CRectangle : public CFigure
{
	//Données privées
	int m_largeur, m_hauteur;
public:
	//Accesseurs, mutateurs
	int getLargeur() const;
	int getHauteur() const;
	void setLargeur(int largeur);
	void setHauteur(int hauteur);

	//Fonctions de la classe
	void dessiner();
	double perimetre();
	double aire();

	//Constructeurs
	CRectangle(int abs, int ord, int largeur, int hauteur);
	CRectangle(int abs, int ord);
	//Destructeur
	~CRectangle();
};

