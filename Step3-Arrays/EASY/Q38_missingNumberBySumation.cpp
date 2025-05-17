#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sumOfN = (n * (n + 1)) / 2;
    int sumOfArr = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfArr = sumOfArr + nums[i];
    }

    return sumOfN - sumOfArr;
};

int main()
{
    vector<int> arr = {0, 1, 6, 3, 2, 5};
    int num = missingNumber(arr);
    cout << "missingNumber: " << num;
    return 0;
}