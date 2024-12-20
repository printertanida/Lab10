#include <iostream>
#include <string>

using namespace std;

int main() {
    int count[5] = {0}; // นับจำนวนนักเรียนแต่ละเกรด
    int totalStudents = 0; // นับจำนวนนักเรียนทั้งหมด
    string grade;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    int studentNum = 1;
    while (true) {
        cout << "Student [" << studentNum << "]: ";
        cin >> grade;

        if (grade == "0") {
            break; // ออกจากลูปเมื่อใส่ 0
        } else if (grade == "A") {
            count[0]++;
        } else if (grade == "B") {
            count[1]++;
        } else if (grade == "C") {
            count[2]++;
        } else if (grade == "D") {
            count[3]++;
        } else if (grade == "F") {
            count[4]++;
        } else {
            cout << "Wrong input. Please input again." << endl;
            studentNum--;
            totalStudents--;// ไม่นับเป็นนักเรียนหนึ่งคน
        }

        totalStudents++;
        studentNum++;
    }

    cout << "In total " << totalStudents << " students." << endl;
    cout << "A = " << count[0] << ", B = " << count[1] << ", C = " << count[2] << ", D = " << count[3] << ", F = " << count[4] << endl;

    return 0;
}