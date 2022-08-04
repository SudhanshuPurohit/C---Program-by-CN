#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int predict(int arr[], int l, int h){
    int i= l;
    int j= h+1;
    while(i<j){
        do{
            i++;
        }while(arr[l] > arr[i] && i<h);
        do{
            j--;
        }
        while(arr[l]< arr[j] && j>l);

        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[l]);
    return j;
}

void quickSort(int arr[] , int l , int h){
    if(l<h){
        int j = predict(arr,l, h );
        quickSort(arr, l, j-1);
        quickSort(arr, j+1, h);
    }
}

int main()
{
    int arr[] = {10,3, 6, 5, 11, 12,13, INT_MAX};
    int n = 8 ;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}