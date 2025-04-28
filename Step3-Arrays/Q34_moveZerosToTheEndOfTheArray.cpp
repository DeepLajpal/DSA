#include <bits/stdc++.h>
using namespace std;

void moveZerosToTheEndOfTheArray(vector<int> &arr)
{
    vector<int> arrOfZeros;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            arrOfZeros.push_back(arr[i]);
        }
        if (arr[i] > 0)
        {
            ans.push_back(arr[i]);
        }
    }

    // pushing the zeros array to the end
    for (int i = 0; i < arrOfZeros.size(); i++)
    {
        ans.push_back(arrOfZeros[i]);
    }

    // pushing the ans to the original arr
    for (int i = 0; i < ans.size(); i++)
    {
        arr[i] = ans[i];
    }
}
int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    moveZerosToTheEndOfTheArray(arr);
    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}