#include <iostream>
using namespace std;

// Function to read a positive integer from the user
int readPositiveNumber(const string& message)
{
    int number;
    cout << message;
    cin >> number;
    while (number < 0) {
        cout << "Invalid input! Please enter a positive number: ";
        cin >> number;
    }
    return number;
}

// Function to calculate the difference between two numbers
int calculateDifference(int a, int b)
{
    return a - b;
}

// Function to print the result based on the difference
void printResult(int difference)
{
    if (difference > 0)
    {
        cout << "Reminder amount is: " << difference << endl;
    }
    else if (difference < 0)
    {
        cout << "Your change is: " << -difference << endl;
    }
    else
    {
        cout << "No change or reminder needed. The amounts are equal." << endl;
    }
}

int main()
{
    // Read the total bill and cash from the user
    int totalBill = readPositiveNumber("Enter total Bill: ");
    int totalCash = readPositiveNumber("Enter total Cash: ");

    // Calculate the difference between cash and bill
    int difference = calculateDifference(totalBill, totalCash);

    // Print the result
    printResult(difference);

    return 0;
}
