#include <iostream>
#include <cmath>
using namespace std;

struct numbers {
	int a;
	int h;
};

numbers readNumbers()
{
	numbers nums;
	cout << "rectangle area through diagonal => 0.5*a*h \n";
	cout << "Enter a: \n";
	cin >> nums.a;
	cout << "Enter h: \n";
	cin >> nums.h;
	return nums;
}

int trangleArea(numbers nums)
{
	int area = 0.5 * nums.a * nums.h;
	return area;
}

void print (int area)
{
	cout << "Trangle area is: " << area << "\n";
}

int main()
{
	print(trangleArea(readNumbers()));
}
