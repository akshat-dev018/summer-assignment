// Bank Account System
#include <iostream>
using namespace std;

int main() {

    string name;
    int accountNo;
    double balance = 0;
    int choice;
    double amount;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNo;

    do {

        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 2:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;

                if (amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance.\n";

                break;

            case 3:
                cout << "Current Balance: " << balance << endl;
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}