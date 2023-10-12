#include<iostream>
using namespace std;

int dupElements(int arr[], int size){
    int found = false;
    int dupElements[size];
    int n=0;
    for(int i = 0 ; i < size ; i++){
        found = false;
        for(int j = 0 ; j < size ; j++){
            if(i=j){continue;};
            if (arr[i]==arr[j]){
                found = true;
            }
        }
        if (found){
            dupElements[n]=arr[i];
            n++;
        }
    }
    for(int i = 0 ; i < n ; i ++){
        cout<<dupElements[i]<<" ";
    }
    return 0;
}

int main(){
    int size = 6;
    int arr[size]= {2,2,3,5,8,8};
    dupElements(arr, size);
}