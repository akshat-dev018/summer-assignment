// Count Set Bits in a Number
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (n > 0) {
        count += n % 2;
        n /= 2;
    }

    cout << "Set bits = " << count;

    return 0;
}