#include <iostream>
using namespace std;

// Function to read a number from the user
double readNumber() {
    double number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

// Function to process the number (divides it by 2)
double processNumber(double number) {
    return number / 2;
}

// Function to print the result
void printResult(double result) {
    cout << "The result is: " << result << endl;
}

int main() {
    // Read a number from the user
    double number = readNumber();
    
    // Process the number
    double result = processNumber(number);
    
    // Print the result
    printResult(result);
    
    return 0;
}
