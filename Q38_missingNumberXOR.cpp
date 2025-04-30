#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ nums[i];
    }

    return xor1 ^ xor2;
};

int main()
{
    vector<int> arr = {0, 1, 6, 3, 2, 5};
    int num = missingNumber(arr);
    cout << "missingNumber: " << num;
    return 0;
}