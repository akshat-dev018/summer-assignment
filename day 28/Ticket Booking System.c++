// Ticket Booking System
#include <iostream>
using namespace std;

int main() {

    int totalSeats = 50;
    int booked = 0;
    int choice, seats;

    do {

        cout << "\n===== Ticket Booking =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Check Available Seats\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:

                cout << "Enter Number of Seats: ";
                cin >> seats;

                if (booked + seats <= totalSeats) {
                    booked += seats;
                    cout << "Booking Successful.\n";
                }
                else {
                    cout << "Seats Not Available.\n";
                }

                break;

            case 2:

                cout << "Available Seats: "
                     << totalSeats - booked << endl;

                break;

            case 3:

                cout << "Thank You!\n";
                break;

            default:

                cout << "Invalid Choice.\n";
        }

    } while (choice != 3);

    return 0;
}