#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Original array

    reverse(arr, arr + 5); // Reverse entire array

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // Output: 5 4 3 2 1
    }

    return 0;
}
