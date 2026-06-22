// Write a function to find the maximum of two numbers
#include <iostream>
using namespace std;

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << "Maximum = " << maximum(num1, num2);

    return 0;
}