#include<iostream>
#include <climits>
using namespace std;

int combination(int n,int r){
    if (n<0 || r<0){cout<<"Negative input's not allowed"; exit(0);}
    if (r>n){cout<<"r cannot be greater than n"; exit(0);}
    long long int nfact=1, rfact=1, nsubrfact=1;
    int nsubr=(n-r);
    cout <<"nfact = " <<nfact<<" ";
    cout<< "rfact = " <<rfact<<" ";
    cout <<"nsubrfact = " <<nsubrfact<<" ";
    cout << "nsubr= "<<nsubr<<" "<<endl;
    cout<<"n= "<<n<<endl<<"r= "<<r<<endl;
    for(int i=2; i<=n; i++)
    {
        nfact=nfact*i;
    };
    for(int i=2; i<=r; i++)
    {
        rfact=rfact*i;
    };
    for(int i=2; i<=nsubr; i++)
    {
        nsubrfact=nsubrfact*i;
    };
    cout <<"nfact = " <<nfact<<" ";
    cout<< "rfact = " <<rfact<<" ";
    cout <<"nsubrfact = " <<nsubrfact<<" ";
    cout << "nsubr= "<<nsubr<<" "<<endl;

    // int fact;
    // if((nfact/(rfact*nsubrfact))>INT_MAX) {cout<<"Oops! factorial value goes out range,because of INT_MAX range";}
    // else {fact=nfact/(rfact*nsubrfact);}
    // return fact;
    int fact=nfact/(rfact*nsubrfact);
    return fact;
}

int main (){
    int n, r;
    cin>>n>>r;
    int Combination=combination(n,r);
    cout<<"Combination = "<< Combination;
}