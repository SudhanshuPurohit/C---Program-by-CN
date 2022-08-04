#include<iostream>
using namespace std;

int main(){
    int T, N, X;
    int arr[10];
    cin>>T;
    while(T>0){
        cin>> N;
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        cin>> X;
        for (int i = 0; i < N; i++)
        {
            if(arr[i]== X){
                cout<<i;
                break;
            }
            else if(arr[i] != X && i==N){
                cout<<(-1);
            }
            
        }

        T--;
    }
}