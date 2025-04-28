#include <bits/stdc++.h>
using namespace std;


 vector <int> getUnion (vector <int> &arr1, vector <int> &arr2){
     vector <int> Union(arr1.begin(), arr1.end());
    
     for (int i = 0; i < arr2.size(); i++){
        for(int j = 0; j < arr1.size(); j++){
            if( arr1[i] != arr2[j]){
                Union.push_back(arr[i] )
            }
        }
     }
 }
int main()
{
    vector <int> arr1 = {1,2,3,4};
    vector <int> arr2 = {5,6,7,8};

    getUnion(arr1, arr2)

    return 0;
}