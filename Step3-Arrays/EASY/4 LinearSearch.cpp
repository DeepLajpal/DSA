#include<iostream>
using namespace std;

bool isPresent(int arr[], int key, int size){
  for(int i = 0 ; i < size ; i++ ){
    if(arr[i]==key){
        return 1;
    }
  }
  return 0;
}

int main(){
    int arr[10]={4,85,7,96,2,-58,78,94,14,1};
    int key;
    cout<<"Enter Key You Want To Search : ";
    cin>>key;
    int found = isPresent(arr,key,10);
    if (found){
        cout<<"Key is present";
    }else{
        cout<<"Key not present";
    }
}