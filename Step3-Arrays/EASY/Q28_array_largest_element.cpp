#include <bits/stdc++.h>
using namespace std;

// int largestElement_bruteforce(vector<int> &nums) //T.C.: O(n) , S.C.: O(1)
// {
//     int largest = nums[0];
//     for (int j = 1; j < nums.size() - 1; j++)
//     {
//         if (nums[j] > largest)
//         {
//             largest = nums[j];
//         }
//     }
//     return largest;
// }

int largestElement_recursive(vector<int> &arr, int i)
{
    int largest = arr[0];
    if (i >= arr.size() - 1)
        return arr[i];

    largest = largestElement_recursive(arr, i + 1);
    return max(arr[i], largest);
}

int main()
{
    vector<int> arr = {5, 9, 7, 1, 5, 3, 4};
    int ans = -1;
    // cout << largestElement_bruteforce(arr);
    cout << largestElement_recursive(arr, 0);
    return 0;
}