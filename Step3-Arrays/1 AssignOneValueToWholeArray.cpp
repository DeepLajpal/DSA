#include <iostream>
using namespace std;


// Using For Loop

int main (){
    int size;
    cout<<"Enter Size: ";
    cin>>size;
    int numArr[size]={1};
    
    for(int i=0; i<size; i++){
    // numArr[i]=1;
    cout<<i<<": "<<numArr[i]<<endl;
    }
}


