#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=-1 , b= -1;
    bool decrease=false, increase=false ; 

    while(n>0){
        cin>>b;
        if(a==-1){
            a = b;
            n--;
            continue;
        }
        
        if(a>b){
            if(increase == true){
                decrease = true;
                break;
            }
            decrease = true;
        }
        else if(a<b){
            increase = true;
            decrease = false;
        }
        else{
            increase = false ;
            decrease = false;
            break;
        }
        a = b;
        n--;
    }

    if(increase^decrease){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    

    return 0;
}