#include<iostream>
using namespace std;

int main(){
    int n , sum=0;
    cin>>n;
    if(n<=0){
        cout<<"Invalid value of n";
    }
    else{

    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<< sum << endl;
    }
    return(0);
}