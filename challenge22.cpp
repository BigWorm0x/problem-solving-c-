#include <iostream>
#define PI 3.141592653589793
using namespace std;

struct triangle 
{
	float Legs, Base;
};

triangle readCircle()
{

	triangle LB;
	cout << "Enter Legs Value: \n";
	cin >> LB.Legs;
	cout << "Enter Base Value: \n";
	cin >> LB.Base;
	return LB;
}

float calculateArea(triangle LB)
{
	float area = (PI * (pow(LB.Base, 2) / 4)) * ((2 * LB.Legs - LB.Base) / (2 * LB.Legs + LB.Base));
	return area;
}

void print(float area)
{
	cout << "circle arae is: " << area << endl;
}

int main()
{
	triangle read = readCircle();
	float calc = calculateArea(read);
	print(calc);
}
