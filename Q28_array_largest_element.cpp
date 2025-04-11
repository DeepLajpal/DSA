#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums)
{
    int largest = nums[0];
    for (int j = 0; j < nums.size() - 1; j++)
    {
        if (nums[j] > largest)
        {
            largest = nums[j];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {5, 9, 7, 1, 5, 3, 4};
    cout << largestElement(arr);
    return 0;
}