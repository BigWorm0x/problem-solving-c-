#include <iostream>
using namespace std;


struct numbers 
{
	int num1, num2, num3;
};

numbers readNumbers()
{

	numbers nums;
	cout << "Please Enter First number: " << "\n";
	cin >> nums.num1;
	cout << "Please Enter Second number: " << "\n";
	cin >> nums.num2;
	cout << "Please Enter Third number: " << "\n";
	cin >> nums.num3;
	return nums;
}

int Softwareprocess(numbers nums)
{
	int sum = nums.num1 + nums.num2 + nums.num3;
	return sum;
}

void printResult(int result)
{
	cout << "The Total Sum of numbers Is: " << result;
}

int main()
{
	printResult(Softwareprocess(readNumbers()));
}
