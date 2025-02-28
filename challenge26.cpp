#include <iostream>
using namespace std;
int readNumber()
{
	int n;
	cout << "Enter end number => (n): \n";
	cin >> n;
	return n;
}
void printResult(int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		counter++;
		cout << counter << endl;
	}
}
int main()
{
	printResult(readNumber());
}
