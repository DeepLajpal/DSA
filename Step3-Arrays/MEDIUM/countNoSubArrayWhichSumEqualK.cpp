#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> arr, int k)
{
    int count = 0;
    int prefixSum = 0;
    int n = arr.size();
    unordered_map<int, int> mpp;
    mpp[0] += 1;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];

        int remainder = prefixSum - k;

        count += mpp[remainder];

        mpp[prefixSum] += 1;
    }
    return count;
}

int main()
{
    vector<int> arr1 = {3, 1, 2, 4};
    vector<int> arr2 = {3, -3, 1, 1, 1};
    int k1 = 6, k2 = 3;
    int cnt = findAllSubarraysWithGivenSum(arr2, k2);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
