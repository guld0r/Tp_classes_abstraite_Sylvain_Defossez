#include "Figure.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Carre.h"

int main() {
	CRectangle r1 = CRectangle(1, 2, 4, 8);
	CCercle c1 = CCercle(1, 2, 12);
	CCarre a1(1, 2);
	//CFigure *figure[3]=[r1, c1, a1];
	

	r1.dessiner();
	c1.dessiner();
	a1.setBord(2);
	a1.dessiner();

	system("pause");

	return 0;
}