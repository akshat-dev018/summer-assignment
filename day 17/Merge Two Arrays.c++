// Merge Two Arrays
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {4,5,6};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int merged[n + m];

    // Copy first array
    for(int i = 0; i < n; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(int i = 0; i < m; i++)
    {
        merged[n + i] = arr2[i];
    }

    cout << "Merged Array: ";

    for(int i = 0; i < n + m; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}