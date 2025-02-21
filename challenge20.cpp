#include <iostream>
#include <cmath>
#define PI 3.1415926535
using namespace std;

double readWidth()
{
    double width;
    cout << "Enter the radius of the circle: ";
    cin >> width;
    return width;
}

double calculateArea(double A)
{
    return (PI * pow (A , 2) ) / 4;

}

void printArea(double area)
{
    cout << "The circle's area in square units equals: " << area << " sq. units" << endl;
}

int main()
{
    double width = readWidth();
    double area = calculateArea(width);
    printArea(area);

    return 0;
}
