#include <bits/stdc++.h>
using namespace std;

void bubble_push_max_last(vector<int> &arr, int j, int n)
{
    if (j == n - 1)
        return;
    // cout << "j: " << j;
    if (arr[j] > arr[j + 1])
    {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
    bubble_push_max_last(arr, j + 1, n);
}

void recursive_bubble_sort(vector<int> &arr, int i, int n)
{
    if (i == n - 1)
        return;
    bubble_push_max_last(arr, 0, n - i);

    recursive_bubble_sort(arr, i + 1, n);
}

void bubbleSort(vector<int> &arr)
{
    recursive_bubble_sort(arr, 0, arr.size());
}
int main()
{
    vector<int> arr = {4, 3, 2, 1};
    bubbleSort(arr);
    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}