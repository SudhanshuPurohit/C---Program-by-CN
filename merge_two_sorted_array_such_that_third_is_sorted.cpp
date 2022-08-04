#include<iostream>
using namespace std;

void merge_array(int a[], int n , int b[] , int m , int c[]){
    //assuming n>m
    // int c[n+m];
    int i=0, j=0; 
    for(; i<n; i++){
        for(; j<m;){

            if(a[i] > b[j]){
                c[i+j] = b[j];
                j++;
            }
            else{
                c[i+j] = a[i];
                i++;
            }

        }
        c[i+j] = a[i];

    }
}

void print_array(int c[], int l){
    for(int i=0; i<l; i++){
        cout<<c[i]<<" ";
    }
}

int main()
{   
    int a[10]={1, 4, 15} , b[10] ={2,3};
    // int c[20];
    int c[20]; 
    merge_array(a, 3, b,2 , c);
    print_array(c, 5);

    return 0;
}