#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size(), currentCount = 0, maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            currentCount = currentCount + 1;
        }
        else
        {
            if (maxCount < currentCount)
            {
                maxCount = currentCount;
            }
            currentCount = 0;
        }
    }

    return maxCount;
}

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1};

    cout << findMaxConsecutiveOnes(arr);
    return 0;
}