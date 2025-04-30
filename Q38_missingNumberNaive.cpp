#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i <= n; i++)
    {
        bool isExist = false;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                isExist = true;
                break;
            }
        }

        if (!isExist)
        {
            return i;
        }
    }
    return -1;
};

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5};
    int num = missingNumber(arr);
    cout << "missingNumber: " << num;
    return 0;
}