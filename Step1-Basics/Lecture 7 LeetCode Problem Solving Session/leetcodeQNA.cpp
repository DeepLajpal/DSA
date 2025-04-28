#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=5;
    // LeetCode Problem Solving Session
    int ans = 0;
        int i=0;
        int ans2 = 0;
        int ans3 = 0;
        while(n){
            int bit=n&1;
            ans = (bit  * pow(10,i) ) + ans;
            i++;
            n=n>>1;
        }
        i=0;

        while(ans){
            int digit=n%10;
            if(digit==1){
                digit=0;
            }
            else{
                digit=1;
            }
            ans2 = (digit * pow(10,i) ) + ans2;
            i++;
            ans=ans/10;
        }
        i=0;

        while(ans2){
            int digit=n%10;
            if(digit==1){
                ans3=ans3+pow(2,i);
            }
            i++;
            ans2=ans2/10;
        }        
        cout<<ans3;
}