#pragma once
#include"Rectangle.h"
class CCarre : private CRectangle
{
public:
	//Accesseurs, mutateurs
	int getBord();
	void setBord(int bord);

	//Fonctions de la classe
	void dessiner();
	double perimetre();
	double aire();

	//Constructeurs
	CCarre(int x, int y, int longueur);
	CCarre(int x, int y);
	//Destructeur
	~CCarre();
};

