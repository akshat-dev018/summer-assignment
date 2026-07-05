// Union of Two Arrays
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
        s.insert(arr1[i]);

    for(int i = 0; i < m; i++)
        s.insert(arr2[i]);

    cout << "Union: ";

    for(auto x : s)
        cout << x << " ";

    return 0;
}