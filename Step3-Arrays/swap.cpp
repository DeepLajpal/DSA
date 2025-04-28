#include<iostream>
using namespace std;

int printArr(int arr[], int size){
    for(int i=0; i<=size ; i++){
        cout<<arr[i]<< " ";
    }
}

int swapAlternative(int arr[], int size){
    for (int i=0 ; i<=size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
    printArr(arr, size);
}
int main(){
    int size = 6;
    int arr[size] = {5,4,8,6,4,2};
    swapAlternative(arr, size-1);
    cout<<"Hello sdd";
    return 0 ;
}
