// Employee Management System
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

int main() {

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++) {

        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].id;

        cin.ignore();

        cout << "Name: ";
        getline(cin, emp[i].name);

        cout << "Department: ";
        getline(cin, emp[i].department);

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\n===== Employee Details =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nEmployee ID : " << emp[i].id;
        cout << "\nName        : " << emp[i].name;
        cout << "\nDepartment  : " << emp[i].department;
        cout << "\nSalary      : " << emp[i].salary << endl;
    }

    return 0;
}