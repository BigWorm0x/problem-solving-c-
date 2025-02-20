
#include <iostream>
using namespace std;

struct numbers {
    int num1, num2 , num3;
};

numbers readNumbers()
{
    numbers nums;
    cout << "Enter Your First number: " << "\n";
    cin >> nums.num1;
    cout << "Enter Your Second number: " << "\n";
    cin >> nums.num2;
    cout << "Enter Your Third number: " << "\n";
    cin >> nums.num3;
    return nums;
}

int checkCalculateMax(numbers nums)
{
    if (nums.num1 > nums.num2 && nums.num1 > nums.num3)
    {
        return nums.num1;
    }
    else if(nums.num2 > nums.num1 && nums.num2 > nums.num3 )
    {
        return nums.num2;
    }
    else if (nums.num3 > nums.num1 && nums.num3 > nums.num2)
    {
        return nums.num3;
    }
}

void printResult(int num)
{
    cout << "Max Number Is: " << num << endl;
}

int main()
{
    numbers read = readNumbers();
    int calculate = checkCalculateMax(read);
    printResult(calculate);
}
