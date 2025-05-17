
#include <bits/stdc++.h>
using namespace std;

// BruteForce Approach
// void sL_sS(vector<int> &arr) // TC: O(nlogn) SC: O(1)
// {
//     if (arr.size() < 2)
//     {
//         cout << -1
//     }
//     sort(arr.begin(), arr.end());
//     cout << "sL: " << arr[arr.size() - 2] << endl;
//     cout << "sS: " << arr[1] << endl;
// }

// Better Approach
void sL_sS(vector<int> &arr) // TC: O(n + n);
{
    int s = INT_MAX, sS = INT_MAX, l = INT_MIN, sL = INT_MIN;
    if (arr.size() < 2)
    {
        cout << -1 << " " << -1 << endl;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        s = min(arr[i], s);
        l = max(arr[i], l);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < sS && arr[i] != s)
        {
            sS = arr[i];
        }
        if (arr[i] > sL && arr[i] != l)
        {
            sL = arr[i];
        }
    }

    if (arr.size() > 1)
    {
        cout << "Second Smallest: " << sS << endl;
        cout << "Second Largest: " << sL << endl;
    }
}

// Optimal Approach
// void sL_sM(vector<int> &arr) // TC: O(n) SC: O(1)
// {
//     int s = INT_MAX, l = INT_MIN, sL = INT_MIN, sS = INT_MAX;
//     if (arr.size() <= 1)
//     {
//         cout << -1 << " " << -1;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] > l)
//         {
//             sL = l;
//             l = arr[i];
//         }
//         else if (arr[i] > sL && arr[i] != l)
//         {
//             sL = arr[i];
//         }

//         if (arr[i] < s)
//         {
//             sS = s;
//             s = arr[i];
//         }
//         else if (arr[i] < sS && arr[i] != s)
//         {
//             sS = arr[i];
//         }
//     }
//     if (arr.size() > 1)
//     {

//         cout << "sL: " << sL << endl;
//         cout << "sS: " << sS << endl;
//     }
// }

int main()
{
    vector<int> arr = {4, 8, 0, 1, 5, 3, 2};
    // vector<int> arr = {1};
    sL_sS(arr);
    return 0;
}