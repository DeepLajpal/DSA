#include <bits/stdc++.h>
using namespace std;

// void leftRotateByDPlaces (vector <int> &arr){

// cout << arr;
// }

void rotate(vector<int> &nums, int k)
{
    // vector<int> temp;
    // vector<int> temp2;
    // int n = nums.size();

    // // pushing the rotating values to temp
    // for (int i = n - k; i < n; i++)
    // {
    //     temp.push_back(nums[i]);
    // }

    // for (int i = 0; i < n - k; i++)
    // {
    //     temp2.push_back(nums[i]);
    // }

    // // shifting other values
    // int j = 0;
    // for (int i = n - (n - k); i < n; i++)
    // {
    //     nums[i] = temp2[j];
    //     j++;
    // }

    // // pushing temp values back to the arr
    // for (int i = 0; i < k; i++)
    // {
    //     nums[i] = temp[i];
    // }

    int n = nums.size();
    if (n == 1)
        return;
    k = k % n;
    cout << *(nums.end() - 1) << endl;
    reverse((nums.begin()), (nums.end() - k));
    reverse((nums.end() - k), nums.end());
    reverse(nums.begin(), nums.end());
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr, 2);

    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}