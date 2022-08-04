#include<iostream>
using namespace std;

int main(){
    
    int x;
    cin>>x;
    int print_counter=1 , function_value;

    for(int n=1; 1 ; n++){
        function_value = 3*n +2;
        
        if(!(function_value%4 == 0)){
            if(print_counter <= x){
                cout<<function_value<<" ";
                print_counter++;
            }
            else{
                break;
            }
            }
        }

    return(0);
    }


