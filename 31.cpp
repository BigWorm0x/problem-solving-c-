#include <iostream>
using namespace std;

int readNmuber()
{
	int number;
	cout << "Please enter a number: \n";
	cin >> number;
	return number;
}

void powerOf2_3_4(int number)
{
	int a, b, c;
	a = number * number;
	b = number * number * number;
	c = number * number * number * number;
	cout << a << endl << b << endl << c;
}

int main()
{
	powerOf2_3_4(readNmuber());
}
