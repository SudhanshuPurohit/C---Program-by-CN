#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin >> arr[i];

    }

    bool leader = false;

    for(int j=0; j<n; j++){
        for(int k=j; k<n; k++){
            if(arr[k]<= arr[j]){
                leader = true;
            }
            else{
                leader = false;
                break;
            }
        }
        if(leader){
            cout<<arr[j]<< " ";
        }
        leader = false;
    }

    return (0);
}