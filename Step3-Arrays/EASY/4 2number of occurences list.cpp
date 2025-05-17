#include<map>
#include<pair>
#include<vector>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int,int>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n ;){
            int count = 1;
            for ( int j = 0 ; j < n ; j++){
                if (i==j) continue;
                if (arr[i]==arr[j]) count++ ;
            }
            ans.insert(pair<int,int>(arr[i],count));
            i+=count;
        }

        for (int i = 0 ; i< n ; i++){
            
        }
    }
};

int main (){
    vector<int> nums{1,2,1,2,3};
    findDuplicates(nums);
}