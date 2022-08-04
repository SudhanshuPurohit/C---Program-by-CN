#include<iostream>
using namespace std;

int main()
{
    int p =10;
    
    int  * const q = &p;
    (*q)++;
    return 0;
}