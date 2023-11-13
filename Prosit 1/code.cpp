#include "code.h"

void code::point()
{
	this->x = 0;
	this->y = 0;
}

void code::point(float v1, float v2)
{
	this->x = v1;
	this->y = v2;
}

void code::setP(float v1, float v2)
{
	cout << "Entrez la valeur de x : ";
	cin >> v1;
	cout << "Entrez la valeur de y : ";
	cin >> v2;

	this->x = v1;
	this->y = v2;
}

float code::getPx()
{
	return this->x;
}

float code::getPy()
{
	return this->y;
}

float code::carre(float v)
{
	v = v * v;
	return v;
}

void code::distance(code p1, code p2)
{
	dist = sqrt((code::carre(p2.getPx() - p1.getPx()) + carre(p2.getPy() - p1.getPy())));
	cout << "La distance entre les deux points est de : " << dist << endl;
}



