#include<iostream>
#include<climits>
using namespace std;

int second_Largest(int arr[] , int n){
    int first_lar =  arr[0], second_lar = INT_MIN;

    for(int i=1; i<n; i++){
        if(first_lar <  arr[i]){
            second_lar = first_lar;
            first_lar = arr[i];
            
        }
        else if((second_lar < arr[i]) && (first_lar!= arr[i])){
            second_lar = arr[i];
        }
    }
    return second_lar;
}


int main()
{
    int arr[] = {1 , 1};
    cout<< second_Largest(arr, 2);
    return 0;
}