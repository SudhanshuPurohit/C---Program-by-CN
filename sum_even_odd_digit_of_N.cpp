#include<iostream>
using namespace std;

int main()
{
    int N, even_sum = 0 , odd_sum = 0;
    cout<<"Enter The Number N --> ";
    cin>> N;
    cout<<N;
    int remainder;

    while(N >= 0){

    remainder = N % 10;

    if((remainder%2) == 0){
        even_sum = even_sum + remainder;
    }
    else{
        odd_sum = odd_sum + remainder;
    }
    
    N = N/10;
    }

    cout<< even_sum << odd_sum;
    cout<<"sudhanshu";
    
    return 0;
}