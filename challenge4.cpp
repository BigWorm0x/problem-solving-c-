#include <iostream>
using namespace std;

struct stInfo
{
    int age;
    char hasDriverLicense; // Changed variable name for clarity
};

// Function to read user information
stInfo readInfo()
{
    stInfo info;
    cout << "Please Enter Your Age: ";
    cin >> info.age;
    cout << "Do you have a driver license? (Y/N): ";
    cin >> info.hasDriverLicense;
    return info;
}

// Function to check if the user is accepted
bool isAccepted(stInfo info)
{
    // Check if age is 21 or older and has a driver license (case-insensitive)
    if (info.age >= 21 && (info.hasDriverLicense == 'Y' || info.hasDriverLicense == 'y'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to print the result
void printResult(stInfo info)
{
    if (isAccepted(info))
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

int main()
{
    // Read user information
    stInfo userInfo = readInfo();

    // Print the result based on the user's information
    printResult(userInfo);

    return 0;
}
