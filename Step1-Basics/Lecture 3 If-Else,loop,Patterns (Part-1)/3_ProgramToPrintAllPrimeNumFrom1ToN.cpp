#include<iostream>
using namespace std;

int main(){
    int N, sum=0, i=2;
    cin>>N;
    while(i<N){
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum\n"<<sum;
    return 0;
}