#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i = 1 , k ;
    
    while(i<=n){
        int j = 1;
        k = i;
        while(j<=i){
            cout<<k-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }



    return 0;
}