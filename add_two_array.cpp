#include<iostream>
using namespace std;

void add_array(int arr1[], int arr2[],int arr3[], int m, int n){
    //assuming m is greater than n
    int carry=0;
    
    for(int i= m-1, j=n-1; i>=0 || j>=0; i--, j--){
        if(j>=0 && i>=0){
           arr3[i] = arr1[i] + arr2[j] + carry;
            if(arr3[i]>10){
                carry = arr3[i] - 10;
            }
            else{
                carry = 0;
            }
            arr3[i] = arr3[i]%10;

        }
        else{
            arr3[i] = arr1[i] + carry;
            if(arr3[i]>10){
                carry = arr3[i] - 10;
            }
            else{
                carry = 0;
            }
            arr3[i] = arr3[i]%10;
        }
    
    }     
}

void print(int arr[], int l){
    for(int i=0; i<l ;i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr1[] = {1,1,1,3};
    int arr2[] = {1,2,3};
    int arr3[10];
    add_array(arr1, arr2 , arr3 , 4,3);
    print(arr3 , 5);
    return 0;
}