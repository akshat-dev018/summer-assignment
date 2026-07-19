// Salary Management System
#include <iostream>
using namespace std;

int main() {

    string name;
    double basic, hra, da, tax, gross, net;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    tax = basic * 0.05;

    gross = basic + hra + da;
    net = gross - tax;

    cout << "\n===== Salary Slip =====\n";

    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basic << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "Tax (5%)      : " << tax << endl;
    cout << "Gross Salary  : " << gross << endl;
    cout << "Net Salary    : " << net << endl;

    return 0;
}