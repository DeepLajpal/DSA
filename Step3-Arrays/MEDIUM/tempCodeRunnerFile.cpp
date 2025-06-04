#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> positiveNums;
    vector<int> negativeNums;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            negativeNums.push_back(nums[i]);
        }
        else
        {
            positiveNums.push_back(nums[i]);
        }
    }
    int s = min(positiveNums.size(), negativeNums.size());

    // Firstly replacing all the equal alternative positiveNums and negatives nums in the given arr nums[]
    int j = 0;
    for (int i = 0; i < s; i++)
    {
        nums[j] = positiveNums[i];
        nums[j + 1] = negativeNums[i];
        j += 2;
    }

    int posSize = positiveNums.size(), negSize = negativeNums.size();
    int index;
    if (posSize < negSize)
    {
        index = posSize * 2;
        for (int i = posSize; i < negSize; i++)
        {
            nums[index] = negativeNums[index];
        }
    }
    if (negSize < posSize)
    {
        index = negSize * 2;
        for (int i = negSize; i < posSize; i++)
        {
            nums[index] = positiveNums[index];
        }
    }
    return nums;
}

int main()
{
    // Example input array with alternating positive and negative numbers
    vector<int> nums = {1, 2, 3, 6, 9, 10, -4, 5, -6, -8, -9};

    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}