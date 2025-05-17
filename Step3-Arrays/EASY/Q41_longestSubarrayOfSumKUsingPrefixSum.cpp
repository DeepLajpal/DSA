#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &arr, int k)
{
    int longestSubArrayLength = 0;
    int n = arr.size();
    int currentSum = 0;
    map<int, int> preFixSum;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        if (currentSum == k)
        {
            longestSubArrayLength = i + 1;
        }

        if (preFixSum.find(currentSum - k) != preFixSum.end())
        {
            longestSubArrayLength = max(i - preFixSum[currentSum - k], longestSubArrayLength);
        }

        if (preFixSum.find(currentSum) == preFixSum.end())
        {
            preFixSum[currentSum] = i;
        }
    }

    return longestSubArrayLength;
}
int main()
{

    vector<int> arr = {2, 0, 0, 5};
    cout << "Longest SubArray Length Whose Sum K: " << longestSubarray(arr, 5) << endl;
    return 0;
}