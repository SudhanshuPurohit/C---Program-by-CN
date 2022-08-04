#include<iostream>
using namespace std;

int main()
{
    
    char str[20];
    cin.getline(str, 20);
    int len=0 , min_len=0;
    int startIndex= 0;

    for(int i=0; str[i]!=' '; i++){
        if(str[i]==' '){
            break;
        }
        min_len++;
    }


    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            if(min_len>len){ 
                min_len = len;
                startIndex = i-len;
            }
            len=0;
        }
        else{
            len++;
        }
    }

    for(int j=startIndex; str[j]!=' '; j++){
        cout<<str[j];
    }

    return 0;
}
