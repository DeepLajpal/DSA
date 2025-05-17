#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}