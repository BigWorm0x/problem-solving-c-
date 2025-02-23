#include <iostream>
#define PI 3.141592653589793
using namespace std;

float readCircumferene()
{
	float l;
	cout << "Enter Circumference of the circle => l \n";
	cin >> l;
	return l;
}

float calculateArea(float l)
{
	float area = pow(l, 2) / (4 * PI);
	return area;
}
void print(float area)
{
	cout << "Circle area is: " << area << endl;
}

int main()
{
	float read = readCircumferene();
	float calc = calculateArea(read);
	print(calc);
}
