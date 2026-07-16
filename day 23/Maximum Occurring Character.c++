// Maximum Occurring Character
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str)
        freq[ch]++;

    char maxChar = str[0];
    int maxFreq = 0;

    for (auto x : freq) {
        if (x.second > maxFreq) {
            maxFreq = x.second;
            maxChar = x.first;
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}