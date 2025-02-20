#include <iostream>
using namespace std;

struct Marks {
    int mark1, mark2, mark3;
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

void printResult(double average) {
    cout << "Your Result Is: " << average << "\n";
}

int main() {
    Marks marks = readMarks();
    double average = calculateAverage(marks);
    printResult(average);
    return 0;
}
