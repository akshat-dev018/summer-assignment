// Find Common Elements
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10,20,30,40};
    int arr2[] = {30,40,50,60};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Common Elements: ";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}