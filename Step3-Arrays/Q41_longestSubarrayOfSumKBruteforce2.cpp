#include <bits/stdc++.h>
using namespace std;

// Optimal BruteForce: Using 2 Loops

int longestSubarray(vector<int> &arr, int k)
{
    int largestSubArrayLength = 0, n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int subArrayLength = 0;
        int subArraySum = 0;
        for (int j = i + 1; j < n; j++)
        {
                subArraySum += arr[j];
                subArrayLength += 1;
            if (subArraySum == k)
            {
                if (largestSubArrayLength < subArrayLength)
                {
                    largestSubArrayLength = subArrayLength;
                }
            }
        }
    }
    return largestSubArrayLength;
}
int main()
{

    vector<int> arr = {1, 2, 3, 4};

    int longestSubArrayLength = longestSubarray(arr, 5);
    cout << "longestSubArrayLength : " << longestSubArrayLength << endl;
    return 0;
}