#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    switch(n){
            case 1:cout<<"First Case";
                   exit(1);

            case 2:cout<<"Second Case";
                //    exit(2);
                 _Exit(2);
                // return 5;
                // continue;
        
            case 3:cout<<"Third Case";
                
            default:cout<<"This is a default Block";                 
        }
//     while(1){
        
//         cout<<"While Start";
        
//         cout<<"While end";
//     }
}