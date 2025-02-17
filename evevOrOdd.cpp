#include <iostream>
using namespace std;

enum enumType
{
	odd = 1,
	even = 0,
};


int readNumber()
{
	int number;
	cout << "Plaese enter your number: ";
	cin >> number;
	return number;
}

enumType checker(int number)
{
	int result = number % 2;
	if (result == 0)
	{
		return enumType::even;
	}
	else
	{
		return enumType::odd;
	}
}

void print(enumType numberType)
{
	if (numberType == enumType::even)
	{
		cout << "Number Is Even";
	}
	else
	{
		cout << "Number Is Odd";
	}
}


int main()
{
	print(checker(readNumber()));
}
