#include <iostream>
using namespace std;

int SumOfArr(int size, int arr[]) {
    int total = 0;
    for(int i = 0; i<size; i++ ){
        cout<<"Enter "<<i<<" element ";
        cin>>arr[i];
        total=total+arr[i];
    };
    cout<<"Sum : "<<total;
    return 0;
}

int main(){
    int size;
    cout<<"Enter Size of Array ?";
    cin>>size;
    int arr[size];
    SumOfArr(size , arr);
    
}