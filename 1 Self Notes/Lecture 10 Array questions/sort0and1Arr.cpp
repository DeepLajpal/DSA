#include<iostream>
using namespace std;

int printArr(int arr[] , int size){
for (int i = 0 ; i < size ; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int sortArr(int arr[], int size){
    int i = 0, j =size-1;
    while(i<j){
        if (arr[i]==0)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[i+1]);
        }

        if ( arr[j]==1)
        {
            j--;
        }

        else
        {
            swap(arr[j],arr[j-1]);
        }

        if(arr[i]==1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main (){
    int arr[8]={1,1,0,0,0,0,1,1};
    sortArr(arr, 8);
    printArr(arr, 8);
}