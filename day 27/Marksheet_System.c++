// Marksheet Generation System
#include <iostream>
using namespace std;

int main() {

    string name;
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << roll << endl;

    cout << "\nSubject Marks\n";
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Subject 4 : " << m4 << endl;
    cout << "Subject 5 : " << m5 << endl;

    cout << "\nTotal      : " << total << "/500";
    cout << "\nPercentage : " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade : A+";
    else if (percentage >= 80)
        cout << "\nGrade : A";
    else if (percentage >= 70)
        cout << "\nGrade : B";
    else if (percentage >= 60)
        cout << "\nGrade : C";
    else if (percentage >= 40)
        cout << "\nGrade : D";
    else
        cout << "\nGrade : F (Fail)";

    return 0;
}