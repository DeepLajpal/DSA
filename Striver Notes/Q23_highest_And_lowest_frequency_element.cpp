#include <bits/stdc++.h>
using namespace std;

// max time taken: ~1hrs
int main()
{
    int n;
    cout << "Enter the number of arr elmt you wnt: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "set the arr elmt " << i << ": ";
        cin >> arr[i];
    }

    // pre-storing
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }

    // finding highest and lowest
    int highestFreq = INT_MIN;
    int lowestFreq = INT_MAX;
    int highestElem = 0;
    int lowestElem = 0;

    for (auto i : mpp)
    {
        if (i.second > highestFreq)
        {
            highestFreq = i.second;
            highestElem = i.first;
        }
        if (i.second < lowestFreq)
        {
            lowestFreq = i.second;
            lowestElem = i.first;
        }
        cout << "Element with highest frequency: " << highestElem << " (appears " << highestFreq << " times)" << endl;
        cout << "Element with lowest frequency: " << lowestElem << " (appears " << lowestFreq << " times)" << endl;
    }
}