#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter The Value of N ";
    cin>>n;

    int a=1, b=1, nth_no;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
        
        for(int i=3; i<=n ; ++i){
            nth_no = a + b;
            a = b;
            b = nth_no;
        }
        cout<< nth_no;
    }
    
    
    
    return(0);
}