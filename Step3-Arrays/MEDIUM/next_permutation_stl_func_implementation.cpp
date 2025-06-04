#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size(), breakpoint = -1;
    
    // Finding breakout
    for (int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            breakpoint = i;
            break;
        }
    }

    //if breakpoint not found then return the reverse of the given array by in-place swaps
    if(breakpoint == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    //if breakpoint found then swap it with its just bigger value from the right
    for (int i = n - 1; i >= 0; i--){
        if(nums[i] > nums[breakpoint]){
            swap(nums[i], nums[breakpoint]);
            break;
        }
    }

    // reverse the right side of the breakpoint to ensure we get the next immediate permutation
    reverse(nums.begin() + breakpoint + 1, nums.end());
}

int main() {
    // Test case
    vector<int> nums = {1, 2, 3};
    cout << "Original array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    nextPermutation(nums);
    
    cout << "Next permutation: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    // Additional test case
    vector<int> nums2 = {3, 2, 1};
    cout << "Original array: ";
    for(int num : nums2) {
        cout << num << " ";
    }
    cout << endl;
    
    nextPermutation(nums2);
    
    cout << "Next permutation: ";
    for(int num : nums2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}