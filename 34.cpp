#include <iostream>
using namespace std;

double totalSales()
{
    double sales;

    while (true)  
    {
        cout << "Please enter your total sales: ";
        cin >> sales;

        if (cin.fail())  
        {
            cout << "Invalid input! Please enter a numeric value.\n";
            cin.clear();  
            cin.ignore(1000, '\n');  
        }
        else if (sales < 0)  
        {
            cout << "Total sales cannot be negative! Try again.\n";
        }
        else
        {
            break;  
        }
    }

    return sales;
}

double commission(double sales)
{
    if (sales >= 1000000)
        return sales * 0.01;
    else if (sales >= 500000)
        return sales * 0.02;
    else if (sales >= 100000)
        return sales * 0.03;
    else if (sales >= 50000)
        return sales * 0.05;
    else
        return 0;
}

void printResult(double commission)
{
    if (commission == 0)
        cout << "No commission!\n";
    else
        cout << "Your commission is: " << commission << endl;
}

int main()
{
    printResult(commission(totalSales()));
    return 0;
}
