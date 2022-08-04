#include<iostream>
using namespace std;

void remove_consecutive_duplicate(char str[]){
    for(int i=0; str[i]!='\0';){
        if(str[i] == str[i+1]){
            for(int j=i+1; str[j]!='\0'; j++){
                str[j] = str[j+1];
            }
        }
        else{
            i++;
        }
    }
}

int main()
{
    char str[20];
    cin>>str;
    remove_consecutive_duplicate(str);
    cout<<str;
    return 0;
}