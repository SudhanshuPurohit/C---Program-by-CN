#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0, last_digit, dec_no = 0;
    while(n>0){
        last_digit = n%10;
        dec_no = dec_no + last_digit * pow(2,i);
        n /=10;
        i++;
    }
    cout<<dec_no;
    return 0;
}