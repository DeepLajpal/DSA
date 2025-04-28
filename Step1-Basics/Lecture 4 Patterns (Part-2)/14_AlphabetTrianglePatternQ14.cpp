// A
// BC
// DEF
// GHIJ

#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;
    char ch='A';
    
    while(row<=n){
        int col=1;
        while(col<=row){
           cout<<ch;
           ch++;
           col++;
        }
        cout<<endl;
        row++;
    }
}