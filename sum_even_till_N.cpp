#include<iostream>
using namespace std;

int main(){
    int sum =0 , n ,d = 0;
    cout<<"Enter the value of N :- ";
    cin>>n;
    while(d<=n){

        if(d%2==0){
            sum = sum + d;
        }
       //     /*/* */*/ this is an error statement ;

        d++; // instead of that why don't you hopp by 2 value means d = d + 2; less time while loop will work
    }

    cout<<"The SUM is = "<< sum;

}