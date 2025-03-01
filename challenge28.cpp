#include <iostream>
using namespace std;

int readNumber()
{
	int n;
	cout << "Enter numbers to print odd \n";
	cin >> n;
	return n;
}
int function(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i = i + 2)
	{
		sum += i;
	}
	return sum;
}

void print(int sum)
{
	cout << "result odd numbers : " << sum;
}


int main()
{
	print(function(readNumber()));
