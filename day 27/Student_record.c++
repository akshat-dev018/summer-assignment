// Student Record Management System
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].roll;

        cin.ignore();

        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display
    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll Number : " << s[i].roll;
        cout << "\nName        : " << s[i].name;
        cout << "\nMarks       : " << s[i].marks << endl;
    }

    return 0;
}