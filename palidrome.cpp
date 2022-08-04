#include<iostream>
using namespace std;

int length(char input[]){
    int len = 0;
    for(int i=0; input[i]!='\0'; i++){
        len++;
    }
    return(len);
}

bool check_palidrome(char input[]){
    bool check = false;
    int leng = length(input);
    cout<<leng<<endl;
    for(int i=0 , j= leng-1 ; i< leng /2; i++,j--){
        if(input[i]==input[j]){
            check = true;
        }
        else{
            check = false;
        }
    }
    return check;
}

int main()
{   char str[10];
    cin>> str;
    cout<< boolalpha << check_palidrome(str);
    return 0;
}