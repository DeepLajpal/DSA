#include <iostream>
#include <vector>
#include <algorithm> // Required for sort

using namespace std; // Added for convenience

class Solution {
public:

    void permute (vector <int> &nums, vector <vector<int>> &ans, int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            permute(nums, ans, index+1);
            swap(nums[i], nums[index]);
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        vector<vector <int>> ans;
        permute(nums, ans, 0);
        sort(ans.begin(), ans.end());

        int permuteIndex;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i][0] == nums[0]){
                int cnt = 0;
                for(int j = 0; j < n; j++){
                    if(nums[j] == ans[i][j]){
                        cnt++;
                    }
                    if(cnt == n){
                        permuteIndex = i;
                        break;
                    }
                }
            }
        }
        int nextPermuteIndex;
        if(permuteIndex == ans.size() - 1){
            nextPermuteIndex = 0;
        }else{
            nextPermuteIndex = permuteIndex + 1;
        }
        for(int i = 0; i < n; i++){
            nums[i] = ans[nextPermuteIndex][i]; 
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3};
    cout << "Original: ";
    for (int x : nums1) cout << x << " ";
    cout << endl;
    sol.nextPermutation(nums1);
    cout << "Next Permutation: ";
    for (int x : nums1) cout << x << " ";
    cout << endl << endl;

    vector<int> nums2 = {3, 2, 1};
    cout << "Original: ";
    for (int x : nums2) cout << x << " ";
    cout << endl;
    sol.nextPermutation(nums2);
    cout << "Next Permutation: ";
    for (int x : nums2) cout << x << " ";
    cout << endl << endl;

    vector<int> nums3 = {1, 1, 5};
    cout << "Original: ";
    for (int x : nums3) cout << x << " ";
    cout << endl;
    sol.nextPermutation(nums3);
    cout << "Next Permutation: ";
    for (int x : nums3) cout << x << " ";
    cout << endl << endl;
    
    vector<int> nums4 = {1, 3, 2};
    cout << "Original: ";
    for (int x : nums4) cout << x << " ";
    cout << endl;
    sol.nextPermutation(nums4);
    cout << "Next Permutation: ";
    for (int x : nums4) cout << x << " ";
    cout << endl;

    return 0;
}