#include <iostream>
using namespace std;

struct numbers {
	int fnum, lnum;
};

numbers readnumber()
{
	numbers nums;
	cout << "enter first number: " << "\n";
	cin >> nums.fnum;
	cout << "enter second number: " << "\n";
	cin >> nums.lnum;
	return nums;
}

numbers swapFunction(numbers nums)
{
	int swap;
	swap = nums.fnum;
	nums.fnum = nums.lnum;
	nums.lnum = swap;
	return nums;
}

void printResult(numbers nums)
{
	cout << "After swapping:\n";
	cout << "First number: " << nums.fnum << "\n";
	cout << "Second number: " << nums.lnum << "\n";
}


int main()
{
	numbers read = readnumber();
	numbers swap = swapFunction(read);
	printResult(swapFunction(read));
	
}
