// Frequency of an Element
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key, count = 0;

    cout << "Enter element whose frequency is to be found: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    cout << "Frequency of " << key << " = " << count;

    return 0;
}