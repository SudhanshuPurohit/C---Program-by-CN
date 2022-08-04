#include<iostream>
using namespace std;

int main()
{
    int n, c;
    cin>>n;
    cout<<endl;
    cin>>c;

    if(c==1){
        cout<<((n)*(n+1))/2;
    }
    else if(c==2){
        int factorial_n=1;
        for(int i=1; i<=n; i++){
            factorial_n *= i;
        }
        cout<<factorial_n;
    }
    else{
        cout<<-1;
    }
    return 0;
}