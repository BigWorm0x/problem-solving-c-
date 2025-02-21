// Program to say (Hello userName)
#include <iostream>
#include <string>
using namespace std;

string UserName()
{
	string userName;
	cout << "Please Enter Your userName: ";
	getline(cin , userName);
	return userName;
}

void print(string un)
{
	cout << "Hello " << un;
}

int main()
{
	print(UserName());
}
