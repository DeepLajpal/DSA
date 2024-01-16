// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF

#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;
    
    while(row<=n){
        char ch='A'+row-1;
        int col=1;
        while(col<=row)
        {
            cout<<ch;
            col++;
        }
        row++;
        cout<<endl;
        
    }
}