#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(islower(ch)) 
        cout<<"This is a lower case character."<<endl;
    else if(isupper(ch))
        cout<<"This is an upper case character."<<endl;
    else if(isdigit(ch))
        cout<<"This is a number."<<endl;
    else
        cout<<"This is not a letter or a number."<<endl;
    return 0;
}


