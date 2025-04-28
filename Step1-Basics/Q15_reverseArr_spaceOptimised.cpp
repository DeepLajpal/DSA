#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = temp;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArr(arr, n - 1);
    return 0;
}