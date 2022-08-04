#include<iostream>
using namespace std;

void Bubble_sort(int input[], int n){
    
    for(int i=0; i<n-1 ;i++){
        for(int j=0; j<n-i-1; j++){
            if(input[j] > input[j+1]){
                int temp = input[j+1];
                input[j+1] = input[j];
                input[j] = temp;
            }

        }
    }
}


int main(){
    
    int input[] = {4, 10, 20, 1};

    Bubble_sort(input, 4);
    for(int i=0; i<4 ; i++){
        cout<< input[i] <<" ";
    }
     

    return(0);
}