#include<iostream>
using namespace std;

int length(char input[]){
    int len = 0;
    for(int i=0; input[i]!='\0'; i++){
        len++;
    }
    return(len);
}

void replace(char input[] , char c1, char c2){
    int leng = length(input);
    for(int i=0; i<leng; i++){
        if(input[i]==c1){
            input[i] = c2;
        }
    }
} 


int main()
{
    char str[10];
    cin>>str;
    char c1, c2;
    cin>> c1 >> c2;
    replace(str, c1, c2);
    cout<< str;
    return 0;
}