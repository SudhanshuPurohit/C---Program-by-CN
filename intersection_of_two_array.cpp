#include<iostream>
using namespace std;

int main()
{
    int arr1[20] , arr2[20] , intrsn_arr[20];
    int N , M;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr1[i];
    }
    
    cin>>M;
    for(int i=0; i<M ; i++){
        cin>> arr2[i];
    }

    bool previous_find = false;
    int l=0;
    for(int i=0; i<N; i++){

        for(int j=0; j<i; j++){
            if(arr1[i]==arr1[j]){
                previous_find = true;
                break;
            }
        }

        if(!previous_find){
            for(int k=0 ; k<M; k++){
                if(arr2[k]== arr1[i]){
                    intrsn_arr[l]=arr1[i];
                    l++;
                }
            }
        }
        
    }

    for(int i=0 ; i<l; i++){
        cout<<intrsn_arr[i]<<" ";
    }

    
    return 0;
}