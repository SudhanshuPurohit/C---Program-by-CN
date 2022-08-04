#include<iostream>
using namespace std;

int main()
{
    int i[]={1,2,3,4};
    int *ptr_i = &i[0];
    int *ptr_j = &i[2];
    cout<<ptr_i<<" "<<ptr_j<<" ";
    cout<<ptr_j-ptr_i;

    return 0;
}