#include <bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &arr, int n)

{
    vector<int> arrReversed(n);
    for (int i = 0; i < n; i++)
    {
        arrReversed[i] = arr[n - i - 1];
        cout << arrReversed[i] << " ";
    }
}
int main()
{
    cout << "Hello World" << endl;
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArr(arr, arr.size());
    return 0;
}