// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;


int main(){
    int n,row=1;
    cin>>n;
    int count=n;

    while (row<=n)
    {
        int space = row-1;
        while(space){
            cout<<' ';
            space--;
        }

        int col=1;
        while (col<=count)
        {
            cout<<'*';
            col++;
        }
        count--;
        cout<<endl;
        row++;
        
    }
    
}