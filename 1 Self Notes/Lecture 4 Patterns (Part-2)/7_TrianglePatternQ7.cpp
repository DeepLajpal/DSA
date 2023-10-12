// 1
// 2 3
// 3 4 5
// 4 5 6 7

// #include<iostream>
// using namespace std;

// int main (){
//     int n, i=1, count=1;
//     cin>>n;

//     while(i<=n){
//         int j=1;
//         count=i;
//         while(j<=i){   
//             cout<<count<<" ";
//             j++;
//             count++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// or

#include<iostream>
using namespace std;

int main (){
    int n, i=1;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=i){   
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
}
