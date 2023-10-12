#include<iostream>
using namespace std;


int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    if (n<0 || r<0){cout<<"Negative input's not allowed"; exit(0);}
    if (r>n){cout<<"r cannot be greater than n"; exit(0);}

    int nsubr;
    if(n-r){
        nsubr=1;
    }else{nsubr=n-r;}
    
    int numerator=factorial(n);

    int denomerator=factorial(r)*factorial(n-r);

    int ans= numerator/denomerator;
    return ans;
}
int main(){
    int n, r;
    cin>>n;
    cin>>r;
    int ans=ncr(n,r);
    cout<<"ncr: "<<ans;
}
