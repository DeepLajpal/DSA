//    *
//   **
//  ***
// ****

#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;

    // loop for the row
    while (row<=n)
    {
        // loop for the _SPACE
        int space=n-row;
        while(space)
        {
            cout<<' ';
            space--;
        }
        
        int col=1;

        // loop for the stars 
        while(col<=row){
            cout<<'*';
            col++;            
        }
        cout<<endl;
        row++;
    }
    
}