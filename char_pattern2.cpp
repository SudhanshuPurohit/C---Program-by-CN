#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char chr= 'A'+ n - i + j - 1 ;
            cout << chr ;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}