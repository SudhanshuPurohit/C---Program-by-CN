#include<iostream>
using namespace std;

int binary_search(int N , int arr[] , int X){
    int mid , start=0 , end=N-1 , index = -1;
    while(start<=end){

        mid = (start + end) /2;

        if(arr[mid]== X){
            index = mid;
            break;
        }
        else{
            if(arr[mid]<X){
                start = mid+1;
                end = end;
            }
            else{
                start = start;
                end = mid -1;
            }
        }

    }
    return(index);
}

int main(){
    int N , X , arr[20];
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    cin>>X;

    cout<< binary_search(N, arr , X);
    return(0);
}