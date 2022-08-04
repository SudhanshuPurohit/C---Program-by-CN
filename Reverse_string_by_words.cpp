#include<iostream>
using namespace std;

void reverse_Str(char str[]){
    int len = 0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }

    for(int i=0, j=len-1; i<j; i++ , j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

    }
}

void reverse_word(char str[]){
    for(int i=0; str[i]!='\0';i++){
        for(int j=i; str[j]!='\0'; j++){
            
            if(str[j]==' '){
                
                for(int k = j-1; k>i; k-- , i++ ){
                        char temp = str[k];
                        str[k] = str[i];
                        str[i] = temp; 
                }
                i = j;
                break;
            }
            else if(str[j+1]=='\0'){
                
                for(int k = j; k>i; k-- , i++ ){
                        char temp = str[k];
                        str[k] = str[i];
                        str[i] = temp; 
                }
                i = j;
                break;
            }
        }
    }
}

int main()
{
    char str[] = "ab cd ef g";
    reverse_Str(str);
    cout<<str<< endl;
    reverse_word(str);
    cout<<str;


    return 0;
}