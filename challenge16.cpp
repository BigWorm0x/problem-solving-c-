#include <iostream>
#include <cmath>
using namespace std;

struct numbers {
	int a;
	int d;
};

numbers readNumbers()
{
	numbers nums;
	cout << "rectangle area through diagonal => a.sqrt((d*d) - (a*a)) \n";
	cout << "Enter a: \n";
	cin >> nums.a;
	cout << "Enter d: \n";
	cin >> nums.d;
	return nums;
}

int rectangleArea(numbers nums)
{
	int area = nums.a * sqrt((nums.d * nums.d) - (nums.a * nums.a));
	return area;
}

void print (int area)
{
	cout << "Rectangle area is: " << area << "\n";
}

int main()
{
	print(rectangleArea(readNumbers()));
}
