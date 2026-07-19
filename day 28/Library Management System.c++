// Library Management System
#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {

    int n;

    cout << "Enter number of books: ";
    cin >> n;

    Book books[n];

    for (int i = 0; i < n; i++) {

        cout << "\nBook " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> books[i].id;

        cin.ignore();

        cout << "Title: ";
        getline(cin, books[i].title);

        cout << "Author: ";
        getline(cin, books[i].author);

        books[i].issued = false;
    }

    int id;

    cout << "\nEnter Book ID to issue: ";
    cin >> id;

    for (int i = 0; i < n; i++) {

        if (books[i].id == id) {
            books[i].issued = true;
            cout << "Book Issued Successfully.\n";
        }
    }

    cout << "\n===== Library Records =====\n";

    for (int i = 0; i < n; i++) {

        cout << "\nBook ID : " << books[i].id;
        cout << "\nTitle   : " << books[i].title;
        cout << "\nAuthor  : " << books[i].author;
        cout << "\nStatus  : ";

        if (books[i].issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << endl;
    }

    return 0;
}