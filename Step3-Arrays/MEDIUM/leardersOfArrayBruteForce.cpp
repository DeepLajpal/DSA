#include <bits/stdc++.h>
using namespace std;

// Using bruteforce
vector<int> leadersOfArray(vector<int> &arr)
{
    vector<int> leadersArr;
    int n = arr.size();

    // if array has one element
    if (n <= 1)
    {
        return arr;
    }

    // since right most element of the given arr is always the leader/ (n-1)th element of the given array
    leadersArr.push_back(arr[n - 1]);
    int currentRightSideMax = arr[n - 1];

    // pushing the rest leaders
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > currentRightSideMax)
        {
            leadersArr.push_back(arr[i]);
            currentRightSideMax = arr[i];
        }
    }
    reverse(leadersArr.begin(), leadersArr.end());
    return leadersArr;
}

int main()
{
    vector<int> arr = {4, 7, 1, 0};
    vector<int> arr2 = {10, 22, 12, 3, 0, 6};
    vector<int> leadersArr = leadersOfArray(arr);
    vector<int> leadersArr2 = leadersOfArray(arr2);

    cout << "Input Array1: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Output leadersArr: ";
    for (int i : leadersArr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Input Array2: ";
    for (int i : arr2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Output leadersArr2: ";
    for (int i : leadersArr2)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}