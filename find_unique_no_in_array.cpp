#include<iostream>
using namespace std;

int main(){
    int T , N , a[20], no;
    cin>>T;
    for(int i=0; i<20 ; i++){
        a[i]=0;
    }
    while(T>0){
        cin>> N;
        int n = N;
        while(N>0){
            cin>>no;
            a[no]++;
            N--;
        }
        for(int i=0; i<n ; i++){
            if(a[i]==1){
                cout<< i;
            }
        }
        T--;
    }
}