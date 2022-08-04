#include<iostream>
using namespace std;

int main()
{
    char str[20];
    cin>>str;
    char ch;
    cin>>ch;
    for(int i=0;str[i]!='\0';){
        if(str[i]==ch){
            for(int j=i; str[j]!='\0'; j++){
                str[j] = str[j+1];
            }
        }
        else{
            i++;
        }
    }
    cout<<str;
    return 0;
}