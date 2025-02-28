#include <iostream>
using namespace std;

int readNumber()
{
	int n;
	cout << "Enter start number: \n";
	cin >> n;
	return n;
}

void printResult(int n)
{
	int counter = 0;
	do
	{
		cout << n-- << "\n";
	} while (counter < n);

}

int main()
{
	printResult(readNumber());
}
