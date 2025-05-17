#include <bits/stdc++.h>
using namespace std;
int getMaximumSubArraySum(vector<int> &nums)
{
    int largestSum = INT_MIN;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int currentSum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSum += nums[k];
            }
            largestSum = max(currentSum, largestSum);
        }
    }
    return largestSum;
}
int main()
{
    // Test Case 1
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Test Case 1 SUM: " << getMaximumSubArraySum(nums) << endl;

    // Test Case 2
    vector<int> nums2 = nums = {1};
    cout << "Test Case 2 SUM: " << getMaximumSubArraySum(nums) << endl;

    return 0;
}