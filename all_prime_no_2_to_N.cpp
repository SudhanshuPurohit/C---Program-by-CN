#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2; i<=n; i++){
        bool divisior = false;
        for(int j=2; j<i; j++){
            if(i%j==0){
                divisior = true;
                break;
            }
        }
        if(!divisior){
            cout<<i<<endl;
        }
    }

    return(0);
}
