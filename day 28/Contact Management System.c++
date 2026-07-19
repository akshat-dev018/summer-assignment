// Contact Management System
#include <iostream>
using namespace std;

struct Contact {

    string name;
    string phone;
};

int main() {

    int n;

    cout << "Enter Number of Contacts: ";
    cin >> n;

    Contact c[n];

    cin.ignore();

    for (int i = 0; i < n; i++) {

        cout << "\nContact " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, c[i].name);

        cout << "Phone Number: ";
        getline(cin, c[i].phone);
    }

    cout << "\n===== Contact List =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nName  : " << c[i].name;
        cout << "\nPhone : " << c[i].phone << endl;
    }

    return 0;
}