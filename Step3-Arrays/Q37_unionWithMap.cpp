#include <bits/stdc++.h>
using namespace std;

vector<int> getUnion(vector<int> arr1, vector<int> arr2)
{

    map<int, int> uniqueSet;
    vector<int> Union;
    // storing unique elements of array1 to Union
    for (int i = 0; i < arr1.size(); i++)
    {
        uniqueSet[arr1[i]]++;
    }

    // storing unique elements of array1 to Union
    for (int i = 0; i < arr2.size(); i++)
    {
        uniqueSet[arr2[i]]++;
    }

    // storing the unique elements into the union array;
    int i = 0;
    for (auto element : uniqueSet)
    {
        Union.push_back(element.first);
    }
    return Union;
}
int main()
{

    vector<int> arr1 = {1, 2, 3, 7, 9, 5};
    vector<int> arr2 = {4, 5, 6};
    vector<int> Union = getUnion(arr1, arr2);
    for (auto i : Union)
    {
        cout << i;
    }
    return 0;
}