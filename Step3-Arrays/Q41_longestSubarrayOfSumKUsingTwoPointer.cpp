#include <bits/stdc++.h>
using namespace std;

// only work for +ve arrays!

// why?
// => with negatives, it may skip valid subarrays. because later negative num reduces the sum back to k.

int longestSubarray(vector<int> &arr, int k)
{
    int maxLen = 0;
    int n = arr.size();
    int currentSum = 0, l = 0, r = 0;

    while (r < n)
    {
        currentSum += arr[r];

        while (currentSum > k && l <= r)
        {
            currentSum -= arr[l];
            l++;
        }

        if (currentSum == k)
        {
            maxLen = max(maxLen, r - l + 1);
        }

        r++;
    }
    return maxLen;
}
int main()
{

    vector<int> arr = {2, 0, 0, 5};
    cout << "Longest SubArray Length Whose Sum K: " << longestSubarray(arr, 5) << endl;
    return 0;
}