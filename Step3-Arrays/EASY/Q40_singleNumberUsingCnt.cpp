#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return nums[0];
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                freq++;
            }
        }
        if (freq == 1)
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    // Example usage
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}