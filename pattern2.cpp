#include<iostream>
using namespace std;

int main(){

    int N, i=1, j, k;
    cout<<"Enter the number N --> ";
    cin>>N;

    while(i<=N){
        
        k = 1;
        j = 1;
        
        while(k<=(N-i)){
            cout<<" ";
            k++;
        }

        while(j<= (2*i-1)){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return(0);
}