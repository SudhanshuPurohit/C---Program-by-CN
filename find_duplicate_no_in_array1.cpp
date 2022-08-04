#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int assume_sum = ((N-2)*(N-1))/2;
    int real_sum =0 , arr[20]; 
    int i = 0;
    while(i<N){
        cin>>arr[i];
        real_sum = real_sum + arr[i];
        i++;
    }
    cout<< (real_sum -assume_sum);
    return 0;
}