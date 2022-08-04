#include<iostream>
using namespace std;

bool check_fabo(int n)
{
    int a=1 , b=1;
    int c=1;
    if (n==0||n==1){
        return true;
    }

    for(int i=4; ; i++){
        if(n < c){
            return false;
        }
        else if(n>c){
            c = a+b;
            a = b;
            b = c;
        }
        if(n==c){
            return true;
        }
    }
}


int main()
{
    int N;
    cin>> N;
    bool check = check_fabo(N);
    cout<< boolalpha<<check;

    return 0;
}