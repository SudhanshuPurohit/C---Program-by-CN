#include<iostream>
using namespace std;


void sort(int arr[] , int n){
    int nz = 0, nt = n-1;
    for(int i=0; (i<n) && (nt>=i);){
        if(arr[i] == 0){
            int temp = arr[nz];
            arr[nz] = arr[i];
            arr[i] = temp;
            nz++;
            i++;
        }
        else if(arr[i] == 2){
            int temp = arr[nt];
            arr[nt] = arr[i];
            arr[i] = temp;
            nt--;
        }
        else{ 
            i++;
        }
    }
}

void print(int arr[] , int n){
    for(int i=0; i<n ; i++){
        cout<< arr[i]<< " " ;
    }
}

int main()
{
    int arr[] = {0,1,2,0,1,2,0,1,2};
    sort(arr,9);
    print(arr,9);


    return 0;
}