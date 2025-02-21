#include <iostream>
#include <cmath>
#define PI 3.14159265359
using namespace std;

float readDiameter()
{
	float diameter;
	cout << "Enter Diameter Value: \n";
	cin >> diameter;
	return diameter;
}

float cArea(float d)
{
	float area = (PI * pow(d, 2)) / 4;
	return area;
}

void printResult(float area)
{
	cout << "circle area by diameter: " << area << endl;
}

int main()
{
	float read = readDiameter();
	float area = cArea(read);
	printResult(area);
}
