#include <bits/stdc++.h>
using namespace std;

// BruteForce: Using 3 Loops

int longestSubarray(vector<int> &arr, int k)
{
    int largestSubArrayLength = 0, n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int subArrayLength = 0;
            int subArraySum = 0;
            for (int m = i; m <= j; m++)
            {
                subArraySum += arr[m];
                subArrayLength += 1;
            }
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