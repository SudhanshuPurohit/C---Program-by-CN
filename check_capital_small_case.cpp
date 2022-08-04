#include<iostream>
using namespace std;

int main(){

    char i;
    cout<<"Enter The Character :";
    cin>>i;

    if(i>=65 && i<=91){
        cout<<1;
    }
    else if(i>=97 && i<=123){
        cout<<0;
    }
    else{
        cout<<-1;
    }
  
}