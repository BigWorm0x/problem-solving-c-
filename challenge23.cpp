// write a program to calculate circle area circle described around an arbitrary triangle ,
// then print it on the screen
#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;
struct triangle {
	float a;
	float b;
	float c;
};
triangle readTriangle()
{
	triangle one;
	cout << "Enter a value: \n";
	cin >> one.a;
	cout << "Enter b value: \n";
	cin >> one.b;
	cout << "Enter c value: \n";
	cin >> one.c;
	return one;
}
float calculate (triangle one)
{
    float p = (one.a + one.b + one.c) / 2;
    float A = sqrt(p * (p - one.a) * (p - one.b) * (p - one.c));
    float R = (one.a * one.b * one.c) / (4 * A);
    float area = PI * R * R;
    return area;
}
void print (float area)
{
	cout << "Circle area is: " << area << "\n";
}
int main()
{
	print(calculate(readTriangle()));
}
