#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int spaces = 1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j = 1;
        int value = i;
        while(j <= i){
            cout<<value;
            value++;
            j++;
        }
        value = value -2;
        while(j-2>=1){
            cout<<value;
            value--;
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}