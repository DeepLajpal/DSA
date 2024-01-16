#include<iostream>
using namespace std;

int nthTermFinder(int n){
    int ans =(3*n)+7;
    return ans;
}

int main (){
    int n;
    cout<<"n: ";
    cin>>n;
    int ans = nthTermFinder(n);
    cout<<"nth term: "<<ans;
}