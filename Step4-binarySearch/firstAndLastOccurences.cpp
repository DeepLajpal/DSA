#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int lowerBound(vector<int> &nums, int target, int n)
    {
        int left = 0;
        int right = n - 1;
        int lb = n;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] >= target)
            {
                right = mid - 1;
                lb = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return lb;
    }
    int upperBound(vector<int> &nums, int target, int n)
    {
        int left = 0;
        int right = n - 1;
        int ub = n;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] > target)
            {
                right = mid - 1;
                ub = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ub;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int lb = lowerBound(nums, target, n);
        if (lb == n || nums[lb] != target)
            return {-1, -1};
        int ub = upperBound(nums, target, n);

        return {lb, ub - 1};
    }
};

int main()
{
    vector<int> nums = {2, 2};
    int target = 2;

    Solution sol;
    vector<int> result = sol.searchRange(nums, target);

    cout << "First and last occurrence of " << target << ": ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}