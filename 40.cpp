#include <iostream>
using namespace std;

// Function to read a number from the user
int readNumber(string msg)
{
    int number;
    cout << msg;
    cin >> number;
    return number;
}

// Function to calculate the total bill after adding fee and tax
float addFeeAndTax(int bill)
{
    float serviceFee = bill * (10.0 / 100);  // 10% service fee
    float billAfterFee = bill + serviceFee;

    float tax = billAfterFee * (16.0 / 100); // 16% tax
    float totalBill = billAfterFee + tax;

    return totalBill;
}

// Function to print the result
void printResult(float total)
{
    cout << "Your bill + service fee + tax: " << total << endl;
}

int main()
{
    // Read the bill from the user
    int bill = readNumber("Enter your bill: ");

    // Calculate the total bill after adding fee and tax
    float total = addFeeAndTax(bill);

    // Print the result
    printResult(total);

    return 0;
}
