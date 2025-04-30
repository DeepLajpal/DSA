#include <bits/stdc++.h>
using namespace std;

vector<int> getUnion(vector<int> arr1, vector<int> arr2)
{

    int i = 0, j = 0, n = arr1.size(), m = arr2.size();
    vector<int> Union;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.size() == 0 || arr1[i] != Union.back())
            {
                Union.push_back(arr1[i]);
                i++;
            }
        }
        else
        {
            if (Union.size() == 0 || arr2[j] != Union.back())
            {
                Union.push_back(arr2[j]);
                j++;
            }
        }
    }
    while (i < n)
    {
        if (Union.size() == 0 || arr1[i] != Union.back())
        {
            Union.push_back(arr1[i]);
            i++;
        }
    }
    while (j < n)
    {
        if (Union.size() == 0 || arr2[j] != Union.back())
        {
            Union.push_back(arr2[j]);
            j++;
        }
    }

    return Union;
}

int main()
{

    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {4, 5, 6};
    vector<int> Union = getUnion(arr1, arr2);
    for (auto i : Union)
    {
        cout << i;
    }
    return 0;
}