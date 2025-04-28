#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    char ch='A';
    cin>>n;
    
    while (row<=n)
    {
        int col=1;
        ch='A'+row-1;
        while(col<=n){
            cout<<ch;
            ch++;
            col++;
        }
        row++;
        cout<<endl;
        
    }
    
}