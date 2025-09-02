#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> arr3(m + n, 0);
    int left = 0;
    int right = 0;
    int index = 0;

    while (left < m && right < n)
    {
        if (nums1[left] <= nums2[right])
        {
            arr3[index++] = nums1[left];
            left++;
            right++;
        }
        else if (nums1[left] > nums2[right])
        {
            arr3[index++] = nums2[right];
            left++;
            right++;
        }
    }
    while (left < m)
    {
        arr3[index++] = nums1[left];
        left++;
    }
    while (right < n)
    {
        arr3[index++] = nums2[right];
        right++;
    }

    for (int i = 0; i < n; i++)
    {
        nums1[i] = arr3[i];
    }
}