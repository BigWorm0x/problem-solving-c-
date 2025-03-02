#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "Please enter a number: \n";
    cin >> number;
    return number;
}

int readPower()
{
    int power;
    cout << "Please enter power: \n";
    cin >> power;
    return power;
}

int PowerOfNumber(int number, int power)
{
    if (power == 0)
    {
        return 1;
    }
    int result = 1;

    for (int i = 1; i <= power; i++)
    {
        result = result * number;
    }
    return result;

}
void printResult(int number)
{
    cout << "Result is: " << number;
}

int main()
{
    int number = readNumber();
    int power = readPower();
    int pon = PowerOfNumber(number, power);
    printResult(pon);
}
