// Palindrome String
#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    bool palindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}