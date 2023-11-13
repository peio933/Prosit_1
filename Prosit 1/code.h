#include <iostream>
#include <math.h>

using namespace std;
class code
{
private:
	float x;
	float y;
	float dist;

	public:
		void point();
		void point(float, float);
		void setP(float, float);
		float getPx();
		float getPy();
		float carre(float);
		void distance(code, code);
};

