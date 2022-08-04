#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int value = n;
    while(i<=n){
        int j = 1;
        
        while(j<=n-i+1){
            cout << value;

            j++;
        }
        cout << endl;
        value--;
        i++;
    }
    getch();
    return (0);
}