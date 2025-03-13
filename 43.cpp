#include <iostream>
using namespace std;

int readNumbers(string msg)
{
    int numbers;
    cout << msg;
    cin >> numbers;
    return numbers;
}

int secToDays(int sec)
{
    return sec / (60 * 60 * 24);
}

int secToHours(int sec)
{
    return sec / (60 * 60);
}

int secToMinutes(int sec)
{
    return sec / 60;
}

int main()
{
    int seconds = readNumbers("Enter the number of seconds: ");

    int days = secToDays(seconds);
    int hours = secToHours(seconds % (60 * 60 * 24)); // Remaining seconds after converting to days
    int minutes = secToMinutes(seconds % (60 * 60));  // Remaining seconds after converting to hours
    int remainingSeconds = seconds % 60;              // Remaining seconds after converting to minutes

    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << remainingSeconds << endl;

    return 0;
}
