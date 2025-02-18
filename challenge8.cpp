#include <iostream>
using namespace std;

// قراءة عدد الطلاب
int studentNums() {
    int nums;
    cout << "Please enter the number of students: ";
    cin >> nums;

    // تحقق من أن عدد الطلاب صحيح (أكبر من 0)
    while (nums <= 0) {
        cout << "Invalid number! Please enter a positive number: ";
        cin >> nums;
    }

    return nums;
}

// قراءة درجة الطالب
int readMark() {
    int mark;
    cout << "Please enter the student's mark (0-100): ";
    cin >> mark;

    // تحقق من أن الدرجة بين 0 و100
    while (mark < 0 || mark > 100) {
        cout << "Invalid mark! Please enter a mark between 0 and 100: ";
        cin >> mark;
    }

    return mark;
}

// التحقق من النجاح
bool checker(int mark) {
    return mark >= 50;
}

// عرض النتيجة
void printResult(bool result) {
    if (result) {
        cout << "Result: Pass\n";
    }
    else {
        cout << "Result: Fail\n";
    }
}

int main() {
    // قراءة عدد الطلاب وتخزين القيمة
    int numStudents = studentNums();

    // معالجة درجات الطلاب
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        int mark = readMark();
        bool result = checker(mark);
        printResult(result);
    }

    return 0;
}
