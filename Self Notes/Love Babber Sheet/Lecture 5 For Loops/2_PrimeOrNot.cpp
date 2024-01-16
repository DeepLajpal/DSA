#include<iostream>
using namespace std;

int main(){
    int N,i;
    cin>>N;

    for(i=2;i<N;i++){
        if(N%i==0){
            cout<<N<<' '<<"Is Not Prime";
            break;
        }
        else{
            if (i=N-1)
            {
                cout<<N<<' '<<"Is a Prime number";
            }
            
        }
    }
}