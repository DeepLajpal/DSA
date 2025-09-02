#include <iostream>
#include <vector>
using namespace std;

class Solution
{

public:
    int merge(vector<int> &arr, int low, int mid, int high)
    {
        int left = low, right = mid + 1, cnt = 0;
        vector<int> temp;

        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left++]);
            }
            else
            {
                temp.push_back(arr[right++]);
                cnt += mid - left + 1;
            }
        }

        // pushing the remaining elem's in the left
        while (left <= mid)
        {
            temp.push_back(arr[left++]);
        }
        // pushing the remaining elem's in the right
        while (right <= high)
        {
            temp.push_back(arr[right++]);
        }

        // pushing the temp sorted elem's back to the original arr
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
        return cnt;
    }
    int mergeSort(vector<int> &arr, int low, int high)
    {
        int cnt = 0;
        int mid = (low + high) / 2;
        if (low >= high)
        {
            return cnt;
        }

        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);

        return cnt;
    }

    int inversionCount(vector<int> &arr)
    {
        int n = arr.size();
        return mergeSort(arr, 0, n - 1);
    }
};

int main()
{
    vector<int> arr = {8, 4, 2, 1};
    Solution sol;
    int count = sol.inversionCount(arr);
    cout << "Number of inversions: " << count << endl;
    return 0;
}