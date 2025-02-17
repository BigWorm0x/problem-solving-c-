#include <iostream>
#include <string>
using namespace std;

struct userInfo
{
    string fName; // First name
    string lName; // Last name
};

// Function to read the user's first and last name
userInfo readUserName()
{
    userInfo info;
    cout << "Please Enter Your First Name: ";
    cin >> info.fName;
    cout << "Please Enter Your Last Name: ";
    cin >> info.lName;
    return info;
}

// Function to concatenate the first and last name into a full name
string getFullName(userInfo info)
{
    string fullName = info.fName + " " + info.lName;
    return fullName; // Return the full name
}

// Function to print the full name
void print(string fullName)
{
    cout << "Your Full Name is: " << fullName << endl;
}

int main()
{
    
    print(getFullName(readUserName()));
    return 0;
}
