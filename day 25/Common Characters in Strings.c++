// Common Characters in Strings
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    vector<int> freq(256, 0);

    for (char ch : str1)
        freq[(unsigned char)ch] = 1;

    cout << "Common Characters: ";

    for (char ch : str2) {
        if (freq[(unsigned char)ch] == 1) {
            cout << ch << " ";
            freq[(unsigned char)ch] = 0;
        }
    }

    return 0;
}