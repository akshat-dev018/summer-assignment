// Convert Decimal to Binary

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int binary[32];
    int i = 0;

    if (num == 0) {
        cout << 0;
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}