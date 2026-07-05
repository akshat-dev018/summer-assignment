// Remove Duplicates from Array
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> seen;

    cout << "Array after removing duplicates:\n";

    for(int i=0;i<n;i++)
    {
        if(seen.find(arr[i]) == seen.end())
        {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }

    return 0;
}