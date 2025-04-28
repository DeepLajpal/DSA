#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n,ans=0,i=0;
    cin>>n;
    
    while(n){
        int digit=n%2;
        ans=ans+(digit*pow(10,i));
        n=n/2;
        i++;
    }
    cout<<"Binary Conversion : "<<ans;
}