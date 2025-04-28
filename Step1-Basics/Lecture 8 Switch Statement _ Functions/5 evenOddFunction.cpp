#include<iostream>
using namespace std;

int evenOddfunc(int n){
    if(n&1){
        cout<<"Odd Number"<<endl;
        return 0;
    }
    cout<<"Even Number";
    
}
int main(){
    int n;
    cin>>n;
    cout<<evenOddfunc(n);
};