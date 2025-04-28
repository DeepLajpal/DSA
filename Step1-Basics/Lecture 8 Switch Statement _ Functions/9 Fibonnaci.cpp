#include<iostream>
using namespace std;

void fibonnaci( int n ){
    int a=1,b=1,num;
    for(int i =1; i<=n-2; i++){
        num=a+b;
        a=b;
        b=num;
    }
     cout<<n<<" fibonnaci number is: "<<num;
}

int main (){
    int n;
    cin>>n;
    fibonnaci(n);
}
