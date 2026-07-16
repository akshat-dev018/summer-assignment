// Remove Duplicate Characters
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    vector<bool> visited(256, false);

    cout << "String after removing duplicates: ";

    for (char ch : str) {
        if (!visited[(unsigned char)ch]) {
            cout << ch;
            visited[(unsigned char)ch] = true;
        }
    }

    return 0;
}