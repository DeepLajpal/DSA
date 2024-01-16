// D
// CD
// BCD
// ABCD

#include<iostream>
using namespace std;

int main (){
    int n,row=1;
    cin>>n;
    

    while(row<=n){
        char ch = 'A'+n-row;
        int col=1;
        while (col<=row)
        {
            cout<<ch;
            ch++;
            col++;
        }
        row++;
        cout<<endl;
        
    }
}