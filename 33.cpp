#include <iostream>
using namespace std;

int readMark()
{
    int mark;
    cout << "Please enter a mark: \n";
    cin >> mark;
    return mark;
}

char studentMark(int mark)
{
    if (mark <= 100 && mark >= 90)
    {
        return 'A';
    }
    else if (mark < 90 && mark >= 80)
    {
        return 'B';
    }
    else if (mark < 80 && mark >= 70)
    {
        return 'C';
    }
    else if (mark < 70 && mark >= 60)
    {
        return 'D';
    }
    else if (mark < 60 && mark >= 0)
    {
        return 'F';
    }
    else
    {
        return 'X'; 
    }
}

void printResult(char result)
{
    if (result == 'X')
    {
        cout << "Invalid mark entered!" << endl;
    }
    else
    {
        cout << "Your result is: " << result << endl;
    }
}

int main()
{
    printResult(studentMark(readMark()));
    return 0;
}
