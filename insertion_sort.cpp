#include<iostream>
using namespace std;

void insertion_sort(int input[], int n){
    for(int i=1; i<n; i++){
        int insertion_index;
        for(int j=i-1; j>=0; j--){
            if(input[j]> input[i]){
                insertion_index = j;
                continue;
            }
            else if(input[j]< input[i]){
                insertion_index = j+1;
                break;
            }
        }
        int insertion_value = input[i];
        for(int k=i-1; k>=insertion_index; k--){
            input[k+1] = input[k];
        }
        input[insertion_index] = insertion_value;
    }
}

void print_array(int input[] , int n){
    for(int i=0; i<n; i++){
        cout<<input[i]<<' ';
    }
}



int main()
{
    int input[] = {9,3,6,2,0};
    insertion_sort(input, 5);
    print_array(input, 5);


    return 0;
}