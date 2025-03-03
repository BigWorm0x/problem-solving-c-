#include <iostream>
using namespace std;

struct BasicCalc
{
    int fNum;
    int sNum;
    char op;
};

BasicCalc readNumbersAndOp()
{
    BasicCalc One;

    while (true) {
        cout << "Please enter first number: ";
        cin >> One.fNum;
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else {
            break;
        }
    }

    while (true) {
        cout << "Please enter second number: ";
        cin >> One.sNum;
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else {
            break;
        }
    }

    while (true) {
        cout << "Please enter operation (+, -, *, /): ";
        cin >> One.op;
        if (One.op == '+' || One.op == '-' || One.op == '*' || One.op == '/') {
            break;
        }
        else {
            cout << "Invalid operator! Please enter one of (+, -, *, /).\n";
        }
    }

    return One;
}

int calculator(BasicCalc one)
{
    int result;
    switch (one.op)
    {
    case '+':
        result = one.fNum + one.sNum;
        break;
    case '-':
        result = one.fNum - one.sNum;
        break;
    case '*':
        result = one.fNum * one.sNum;
        break;
    case '/':
        if (one.sNum == 0) {
            cout << "Error: Division by zero is not allowed!\n";
            return 0;
        }
        result = one.fNum / one.sNum;
        break;
    default:
        cout << "Error: Invalid operator!\n";
        return 0;
    }
    return result;
}

void printResult(BasicCalc one, int result)
{
    cout << "Your operation is: " << one.fNum << " " << one.op << " " << one.sNum << " = " << result << endl;
}

int main()
{
    BasicCalc data = readNumbersAndOp();
    int result = calculator(data);
    printResult(data, result);
    return 0;
}

