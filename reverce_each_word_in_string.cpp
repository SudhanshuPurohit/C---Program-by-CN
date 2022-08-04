#include<iostream>
using namespace std;

void stringWordReverse(char str[]){
    int i=0;
    int j = 0;
    while (str[i]!='\0')
    {
        if(str[i]==' '){
            for(int k = i-1;j<(j+k)/2; k--,j++){
               char temp = str[j];
               str[j] = str[k];
               str[k] = temp;
            }
             j = i+1;
        }

        else if(str[i+1] =='\0'){
            for(int k = i; j<(j+k)/2; k--, j++){
                char temp = str[j];
                str[j] =  str[k];
                str[k] = temp;
            }
        }
       
        i++;
    };
    
}

int main()
{
    char str[40];
    cin.getline(str, 40);
    stringWordReverse(str);
    cout<<"String :- "<<str;
    return 0;
}