#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sqrt=0, a=1;

    while(1){
        if(a*a < n){
            sqrt = a;
            a++;
        }
        else if(a*a==n){
            sqrt = a;
            break;
        }
        else {
            break;
        }
    }
    cout<<sqrt;

    return 0;
}