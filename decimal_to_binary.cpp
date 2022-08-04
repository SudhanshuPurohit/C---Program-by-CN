#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    long int binary=0, place_value=1;
    int reminder;
    
    while(n>0){
        reminder = n%2;
        if(reminder == 1){
            binary = binary + reminder*place_value; 
        }

        place_value = place_value * 10;
        n = n/2;
    }
    cout<<binary;

    return 0;
}