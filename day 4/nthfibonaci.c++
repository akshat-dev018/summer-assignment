// Write a program to Find nth Fibonacci term.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int first = 0, second = 1;

    if (n == 0)
        cout << first;
    else if (n == 1)
        cout << second;
    else {
        int next;

        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        cout << second;
    }

    return 0;
}