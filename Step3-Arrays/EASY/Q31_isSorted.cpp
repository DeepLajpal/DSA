#include <bits/stdc++.h>
using namespace std;

bool is_Sorted(vector<int> &arr)
{
    bool isSorted = true;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }
    return isSorted;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << is_Sorted(arr);
    return 0;
}