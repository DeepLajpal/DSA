#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    int maxNum = 0;
    if (n == 1)
    {
        return nums[0];
    }

    // getting the max num from nums arr
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxNum)
        {
            maxNum = nums[i];
        }
    }

    // pre-storing the frequencies in the map
    int *hash = new int[maxNum + 1];
    memset(hash, 0, sizeof(int) * (maxNum + 1));
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
    }

    // fetching and checking which freq is equal to 1
    for (int i = 0; i < n; i++)
    {
        if (hash[nums[i]] == 1)
        {
            delete[] hash; // to prevent memory leaks
            return nums[i];
        }
    }
    // this will never execute because the array is non empty
    delete[] hash; // to prevent memory leaks
    return -1;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;

    vector<int> nums2 = {2, 2, 1};
    cout << "The single number is: " << singleNumber(nums2) << endl;

    return 0;
}