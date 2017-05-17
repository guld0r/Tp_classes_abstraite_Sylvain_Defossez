#pragma once
#include <iostream>

using namespace std;
class CFigure
{
	//Données privées
	int m_x, m_y;
public:
	//Accesseurs, mutateurs
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	//Fonction de la classe abstraite
	virtual void dessiner();
	virtual double aire();
	virtual double perimetre();

	//Constructeurs
	CFigure(int abs, int ord);
	CFigure();
	//Destructeur
	~CFigure();
};

