#include <iostream>
using namespace std;

struct numbers{
	int length, width;
};

numbers readInputs()
{
	numbers nums;
	cout << "Enter length: \n";
	cin >> nums.length;
	cout << "Enter width: \n";
	cin >> nums.width;
	return nums;
}

int rectangleArea(numbers nums)
{
	int area = nums.length * nums.width;
	return area;
}

void printResult(int area)
{
	cout << "Rectangle Area Is: " << area;
}

int main()
{
	printResult(rectangleArea(readInputs()));
}
