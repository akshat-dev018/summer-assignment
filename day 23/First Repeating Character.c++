// First Repeating Character
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    unordered_set<char> visited;

    for (char ch : str) {
        if (visited.count(ch)) {
            cout << "First repeating character: " << ch;
            return 0;
        }
        visited.insert(ch);
    }

    cout << "No repeating character found.";
    return 0;
}