// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1

// #include<iostream>
// using namespace std;

// int main(){
//     int n, row=1;
//     cin>>n;
//     int count=n;

//     while(row<=n){
//         int col=1;
//         while(col<=n-row+1){
//             cout<<col<<' ';
//             col++;
//         }

//         int start = row-1;
//         while(start){
//             cout<<"* ";
//             cout<<"* ";
//             start--;
//         }

//         int col2=1;
//         while(col2<=n-row+1){
//             cout<<count-col2+1<<' ';
//             col2++;
//         }
//         cout<<endl;
//         count--;
//         row++;
//     }
// }


// or

#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cin>>n;
    int count=n;

    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col<<' ';
            col++;
        }

        int start = row-1;
        while(start){
            cout<<"* ";
            start--;
        }

        int start2 = row-1;
        while(start2){
            cout<<"* ";
            start2--;
        }

        int col2=1;
        while(col2<=n-row+1){
            cout<<count-col2+1<<' ';
            col2++;
        }
        cout<<endl;
        count--;
        row++;
    }
}
