#include <iostream>
#include <math.h>
#include "code.h"

using namespace std;

int main()
{
	code p1;
	code p2;
	float x = 0;
	float y = 0;

	p1.point();
	p2.point();

	p1.setP(x, y);
	p2.setP(x, y);

	p1.getPx();
	p1.getPy();
	p2.getPx();
	p2.getPy();

	//p1.carre(x);
	//p2.carre(y);

	p1.distance(p1, p2);

	return 0;
}