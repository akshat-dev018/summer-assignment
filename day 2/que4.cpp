// Check Whether a Number is Palindrome

#include <iostream>
using namespace std;

int main() {
    int num, original, rev = 0;
    cin >> num;

    original = num;

    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}