#include <iostream>
#define M_PI 3.14159265358979323846
using namespace std;

double readNumber()
{
	double radius;
	cout << "Enter radius value: \n";
	cin >> radius;
	return radius;
}

double circleArea(double radius)
{
	double area = M_PI * (radius * radius);
	return area;
}

void printResult(double area)
{
	cout << "Circle Area Is: " << area;
}

int main()
{
	double read = readNumber();
	double circle = circleArea(read);
	printResult(circle);
}
