#include <iostream>
using namespace std;

int readNumber(string msg)
{
    int number;
    cout << msg;
    cin >> number;
    return number;
}

int daysToSeconds(int days)
{
    return days * 24 * 60 * 60; // Convert days to seconds
}

int hoursToSeconds(int hours)
{
    return hours * 60 * 60; // Convert hours to seconds
}

int minutesToSecconds(int minutes)
{
    return minutes * 60;
}

int allSeconds(int days, int hours, int minutes, int seconds)
{
    int totalSeconds = daysToSeconds(days) + hoursToSeconds(hours) + minutesToSecconds(minutes) + seconds;
    cout << "All seconds: " << totalSeconds << endl;
    return totalSeconds; // Return the total seconds
}

int main()
{
    int days = readNumber("Enter number of days: \n");
    int hours = readNumber("Enter number of hours: \n");
    int minutes = readNumber("Enter number of minutes: \n");
    int seconds = readNumber("Enter number of seconds: \n");

    allSeconds(days, hours, minutes ,seconds);

    return 0;
}
