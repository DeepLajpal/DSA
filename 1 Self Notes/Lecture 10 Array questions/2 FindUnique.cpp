#include <iostream>
using namespace std;

// int printArr(int arr[], int size){
//     for (int i = 0 ; i < size ; i++){
//         cout << arr[i] << " "; 
//     }
//     return 0;
// };

// int UniqueArrElements(int arr[] , int size){
//     int uniqueArr[size]={0};
//     int n=0; 
//     int m=0;
//     for (int i = 0 ; i < size ; i ++){
//         m=0;
//         for (int j = 0 ; j < size ; j ++){
//             if(i==j){continue;}
//             if(arr[i]!=arr[j])
//             {
//                m++;
//             }
//         }
//         if(m==(size-1)){
//             uniqueArr[n]=arr[i];
//             n++;
//         }
//     }
//     for (int i = 0 ; i < n ; i++){
//         cout << uniqueArr[i] << " "; 
//     }
//   return 0;  
// }

// int main(){
//     int size = 10;
//     int arr[size]={8,7,1,65,3,7,9,8,1,65};
//     cout<<endl<<"Orginal Array : ";
//     printArr(arr, size);
//     cout<<endl<<"Unique Elements : ";
//     UniqueArrElements(arr, size);
// }

int unique(int arr[], int size){
    int ans = 0 ;
    for (int i = 0 ; i < size ; i ++){
        ans = ans ^ arr[i];
    }
    return ans;
};

int main(){
    int arr[9]={1, 3, 1, 3, 6, 6, 7, 10, 7} ;
    int uniqueElement = unique(arr, 9);
    cout<<uniqueElement;
    return 0 ;
}