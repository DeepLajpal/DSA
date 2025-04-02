#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creating array with the user input
    int n;
    cout << "Enter Number of arr elmt you want: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Set arr element " << i << ": ";
        cin >> arr[i];
    }

    // pre-storing
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }

    int q;
    cout << "Enter Number of queries you want to ask: ";
    cin >> q;

    // fetching
    for (int i = 0; i < q; i++)
    {
        int num;
        cout << "Enter no to check the frequency: ";
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}