#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    map<int, int> frequencies;

    // pre-storing
    for (int i = 0; i < n; i++)
    {
        frequencies[nums[i]]++;
    }

    // fetching
    for (int i = 0; i <= n; i++)
    {
        if (frequencies[i] == 0)
        {
            return i;
        }
    }

    return -1;
};

int main()
{
    vector<int> arr = {0, 1, 6, 3, 2, 5};
    int num = missingNumber(arr);
    cout << "missingNumber: " << num;
    return 0;
}