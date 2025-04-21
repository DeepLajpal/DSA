#include <bits/stdc++.h>
using namespace std;

void recursive_insertionPass(vector<int> &arr, int j)
{
    if (j == 0)
    {
        return;
    }
    int pass = 0;
    if (arr[j] < arr[j - 1])
    {
        pass = 1;
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
    }
    if (pass == 0)
        return;
    recursive_insertionPass(arr, j - 1);
}
void recursive_insertionSort(vector<int> &arr, int i, int n)
{
    if (i > n - 1)
        return;

    recursive_insertionPass(arr, i);
    recursive_insertionSort(arr, i + 1, n);
}

int main()
{

    vector<int> arr = {4, 3, 2, 1};
    recursive_insertionSort(arr, 0, arr.size());

    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}