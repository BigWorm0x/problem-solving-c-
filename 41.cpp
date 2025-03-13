#include <iostream>
using namespace std;

int readNumber(string msg)
{
	int number;
	cout << msg;
	cin >> number;
	return number;
}

float calcDays(int hour)
{
	float days = hour / 24.0;
	return days;
}

float calcWeeks(int hour)
{
	float weeks = hour / ( 24.0 * 7 );
	return weeks;
}

void printResult(int hours  , float days , float weeks)
{
	cout << "your hours is: " << hours << " \n";
	cout << "total Days is: " << days << " \n";
	cout << "total weeks is: " << weeks << " \n";

}

int main()
{
	int hours = readNumber("Enter number of hours to calculate days and weeks \n");
	float days = calcDays(hours);
	float weeks = calcWeeks(hours);
	printResult(hours, days, weeks);

}
