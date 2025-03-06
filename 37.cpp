#include <iostream>
using namespace std;

int readInput()
{
    int number;
    do 
    {
        cout << "please enter a number: \n";
        cin >> number;
    }while(number != -99);
    return number;
}
int result(int number)
{
    int sum = 0;
    while (number)
    {
        sum = sum + number;
    }
    return sum;
}
void print(int number)
{
    cout << number << endl;
}

int main()
{
    print(result(readInput()));
}
