#include <bits/stdc++.h>
using namespace std;

// reversing the direction of the bubbling: In each pass, the smallest element is pushed to the beginning (left side
void reverse_bubbleSort_push(vector<int> &arr, int i, int n)
{
    if (i == n)
        return;
    if (arr[n] < arr[n - 1])
    {
        int temp = arr[n];
        arr[n] = arr[n - 1];
        arr[n - 1] = temp;
    }

    reverse_bubbleSort_push(arr, i, n - 1);
}
void reverse_direction_bubble_sort_recursive(vector<int> &arr, int i, int n)
{
    if (i == n - 1)
    {
        return;
    }

    reverse_bubbleSort_push(arr, i, n - 1);
    reverse_direction_bubble_sort_recursive(arr, i + 1, n);
}
int main()
{
    vector<int> arr = {4, 3, 2, 1};
    reverse_direction_bubble_sort_recursive(arr, 0, arr.size());
    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}