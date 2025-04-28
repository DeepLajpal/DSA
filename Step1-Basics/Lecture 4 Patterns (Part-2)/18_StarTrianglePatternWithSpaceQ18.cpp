// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int count=n;
    while (row<=n)
    {
        
        int col=1;
        while(col<=count){
            cout<<'*';
            col++;
        }
        count--;
        cout<<endl;
        row++;
    }
    
}