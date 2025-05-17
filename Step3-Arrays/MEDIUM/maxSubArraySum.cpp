#include <bits/stdc++.h>
using namespace std;

int getMaximumSubArraySum(vector<int> &nums)
{
    int largestSum = INT_MIN;
    int currentSum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        if (currentSum > largestSum)
        {
            largestSum = currentSum;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return largestSum;
}
int main()
{
    // Test Case 1
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Test Case 1: " << getMaximumSubArraySum(nums) << endl;

    // Test Case 2
    vector<int> nums2 = nums = {1};
    cout << "Test Case 2: " << getMaximumSubArraySum(nums) << endl;

    return 0;
}