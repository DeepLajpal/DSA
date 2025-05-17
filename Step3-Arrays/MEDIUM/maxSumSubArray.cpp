#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxSumSubArray(vector<int> &nums)
{
    int largestSum = INT_MIN;
    int currentSum = 0;
    int n = nums.size();
    int start;

    int ansStart = -1, ansEnd = -1;

    for (int i = 0; i < n; i++)
    {
        if (currentSum == 0)
        {
            start = i;
        }
        currentSum += nums[i];
        if (currentSum > largestSum)
        {
            largestSum = currentSum;

            ansStart = start;
            ansEnd = i;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return {ansStart, ansEnd};
}
int main()
{
    // Test Case 1
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    pair<int, int> ans = maxSumSubArray(nums);
    cout << "Test Case 1: " << "Start: " << ans.first << " " << "End: " << ans.second << endl;

    // Test Case 2
    vector<int> nums2 = nums = {-1, -1};
    pair<int, int> ans2 = maxSumSubArray(nums);
    cout << "Test Case 2: " << "Start: " << ans2.first << " " << "End: " << ans2.second << endl;

    return 0;
}