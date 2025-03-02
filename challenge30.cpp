#include <iostream>
using namespace std;

int readNumber()
{
	int number;
	do
	{
		cout << "Please enter a number to calculate factorial : \n";
		cin >> number;
		if (number < 0)
		{
			cout << "Error: Factorial is not defined for negative numbers!\n";
		}
	} while (number < 0);
	return number;
}

long long factorial(int number)
{
	int counter = 1;
	for (int i = 1; i <= number; i++ )
	{
		counter = counter * i;
	}
	return counter;
}
void printresult(long long number)
{
	cout << "Factorial Result is: " << number;
}


int main()
{
	printresult(factorial(readNumber()));
}
