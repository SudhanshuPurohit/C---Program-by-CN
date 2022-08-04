#include<iostream>
using namespace std;

void Rotate_array(int arr[], int n , int d){
    for(int i=0 ,j= d-1; (i<(d/2) )&& (j>=(d/2)); i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=d, j=n-1; (i<(n+d)/2) && j>= (n+d)/2 ; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0, j=n-1; (i<(n/2))&&(j>=(n/2)); i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }


}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    Rotate_array(arr , 7 ,0);
    print(arr , 7);
}