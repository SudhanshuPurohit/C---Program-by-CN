#include<iostream>
using namespace std;


void mergeList(int arr[], int l , int mid ,int r){

    int n = mid -l +1;
    int m = r - mid;    
    int left_array[n];
    int right_array[m];

    for(int i=0; i<n; i++){
        left_array[i] = arr[l+i];

    }
    for(int j=0; j<m; j++){
        right_array[j] = arr[mid+1 +j];
    }
     
    int i=0;
    int j =0;
    int k = l;
    while(i<n && j<m){
        if(left_array[i]>right_array[j]){
            arr[k] = right_array[j];
            j++;
            k++;
        }
        else{
            arr[k] = left_array[i];
            i++;
            k++;
        }
    }

    while(i<n){
        arr[k] = left_array[i];
        k++;
        i++;
    }
    while(j<m){
        arr[k] = right_array[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r){

    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l , mid);
        mergeSort(arr, mid+1, r);
        mergeList(arr,l , mid ,r );

    }

}


void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {5,4,3,1,1};
    int n =5;
    int l=0;
    int r =n-1;
    mergeSort(arr, l , r);
    print(arr,n);

    return 0;
}