#include <iostream>
using namespace std;

struct Marks {
    int mark1, mark2, mark3;
};

enum Check {
    Fail, Pass
};

Marks readMarks() {
    Marks mark;
    cout << "Please Enter First mark: ";
    cin >> mark.mark1;
    cout << "Please Enter Second mark: ";
    cin >> mark.mark2;
    cout << "Please Enter Third mark: ";
    cin >> mark.mark3;
    return mark;
}

double calculateAverage(Marks mark) {
    return (mark.mark1 + mark.mark2 + mark.mark3) / 3.0;
}

Check checker(double average) {
    if (average >= 50 && average <= 100) {
        return Check::Pass;
    }
    else {
        return Check::Fail;
    }
}

void printResult(double average, Check result) {
    if (result == Check::Pass) {
        cout << "Your Average is " << average << " and you are 'Pass' in Exams.\n";
    }
    else {
        cout << "Your Average is " << average << " and you are 'Fail' in Exams.\n";
    }
}

int main() {
    Marks marks = readMarks();
    double average = calculateAverage(marks);
    Check result = checker(average);
    printResult(average, result);
    return 0;
}
