// 123
// 456
// 789

#include<iostream>
using namespace std;

int main (){
    int n,i=1,num=1;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<num;
            j++;
            num++;
        }
        cout<<endl;
        i++;
    }
}