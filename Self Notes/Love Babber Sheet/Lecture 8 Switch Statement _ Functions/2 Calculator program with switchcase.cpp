#include<iostream>
using namespace std;

int main(){
    long long int a, b, n;
    cout<<"Enter First Number: ";
    cin>> a;
    cout<<"Enter Second Number: ";
    cin>> b;
    cout<<"Which Operation you want to Preform? Please Choose from the following."<<endl;
    cout<<"For Multiplication Enter 1: "<<endl;
    cout<<"For Division Enter 2: "<<endl;
    cout<<"For Subtraction Enter 3: "<<endl;
    cout<<"For Addition Enter 4: "<<endl;
    cout<<"For Remainder Enter 5: "<<endl;
    cin>> n;
    switch(n){
        case 1:cout<<"Multiplication Result: "<< a*b;
                break;
        case 2:cout<<"Division Result: "<< a/b;
                break;
        case 3:cout<<"Subtraction Result: "<< a-b;
                break;
        case 4:cout<<"Addition Result: "<< a+b;
                break;
        case 5:cout<<"Remainder Result: "<< a%b;
                break;
        default: cout<< "Invalid Input! Please try again";
    };

}