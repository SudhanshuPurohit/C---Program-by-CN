#include<iostream>
using namespace std;

int x = 1;

void print(){
    int x = 2;
    if(1){
        int x = 3;
        cout << x << endl;
    }
}
int main(){
    print();
    return 0;
}