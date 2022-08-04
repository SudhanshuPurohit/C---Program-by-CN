#include<iostream>
using namespace std;

int main()
{
    char str[20];
    cin>>str;
    int count;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]== str[i+1]){
            count = 2;
            if(str[i+1] == str[i+2]){
                count++;
                for(int j=i+2; str[j]!=0; j++){
                   str[j] = str[j+1];

                }
            }
            str[i+1] = count;
            count=0;
        }
    }
        for(int k=0; str[k]!='\0'; k++){
            if(str[k]<=9){
                cout<<int(str[k]);
            }
            else{
                cout<<str[k];
            }
        }

    return 0;
}