#include <iostream>
using namespace std;

void initializeArr(int numArr[], int size){
    
    for(int i = 0; i <size; i++){
        cout<<"Enter value for "<<i<< " index: ";
        int n;
        cin>>n;
        numArr[i]=n;
    }
}

// .................1st Way - Self

void MinMaxArr(int numArr[], int size){
    int Min=numArr[0];
    int Max=numArr[0];
    for (int i = 0; i<size; i++){
        for(int j = 0 ; j < size ; j++){
            if(numArr[i]<numArr[j] && numArr[i]<Min){
                Min=numArr[i];
            }
            if(numArr[i]>numArr[j] && numArr[i]>Max){
                Max=numArr[i];
            }

        }
    }

    cout<<"Min :"<< Min<<endl;
    cout<<"Max :"<< Max;
};

// or.............2nd way - By Babber

void MinMaxArr2(int numArr[], int size){
    int Min=INT_MAX;
    int Max=INT_MIN;
    for (int i = 0; i<size; i++){
        
            if(numArr[i]<Min){
                Min=numArr[i];
            }
            if(numArr[i]>Max){
                Max=numArr[i];
            }
    }

    cout<<"Min :"<< Min<<endl;
    cout<<"Max :"<< Max;
};

// or..........3rd Way - By Build in method in C++


int main (){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int numArr[size];
    initializeArr(numArr,size);
    cout<<"1st Way Solution"<<endl;
    MinMaxArr(numArr, size);
    cout<<endl;
    cout<<"2nd Way Solution"<<endl;
    MinMaxArr2(numArr, size);
}