#include <iostream>
#include <vector>
#include <algorithm> // for next_permutation

using namespace std;

void nextPermutation(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3};

    cout << "Original array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}