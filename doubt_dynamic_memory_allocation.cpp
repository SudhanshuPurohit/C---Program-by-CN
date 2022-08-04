#include<iostream>
using namespace std;

int main()
{   
    int n=3;
    int i = 0;
    int *p;
    while(i<n){
        p = new int;
        cin>>*p;
        i++;
    }
    cout<<*p;

    return 0;
}