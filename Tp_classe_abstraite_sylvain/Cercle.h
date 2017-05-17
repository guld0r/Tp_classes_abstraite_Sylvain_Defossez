#pragma once
#include "Figure.h"
class CCercle : public CFigure
{
	//Donnée privée
	int m_radius;
public:
	//Accesseurs, mutateurs
	int getRadius()const;
	void setRadius(int radius);

	//Fonction de la classe
	void dessiner();
	double perimetre();
	double aire();

	//Constructeurs
	CCercle(int abs, int ord, int radius);
	CCercle(int x, int y);
	//Destructeur
	~CCercle();
};

