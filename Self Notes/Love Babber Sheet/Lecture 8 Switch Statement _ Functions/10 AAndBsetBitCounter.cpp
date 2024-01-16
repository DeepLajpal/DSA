#include<iostream>
#include<math.h>
using namespace std;


int setBitCounter(int n)
{
    int count = 0, ans=0;
    for(int i=0; n>0; i++){
        int bit =n&1;
        if(bit==1){
            count++;
        }
        n=n>>1;
    }
    return count;
};
int dualNumSetBitCounter(int a , int b ){
    int totalSetBit=setBitCounter(a)+setBitCounter(b);
    return totalSetBit;
};

int main (){
    int a, b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    int ans=dualNumSetBitCounter(a,b);
    cout<<"ans: "<<ans;
}