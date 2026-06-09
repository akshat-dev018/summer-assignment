// Check Armstrong Number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digits = 0;
    cin >> num;

    original = num;
    int temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    int sum = 0;

    // Calculate Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}