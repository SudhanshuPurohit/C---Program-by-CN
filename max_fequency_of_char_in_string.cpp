#include<iostream>
using namespace std;

int main()
{
    char str[26];
    int frequency[26]={0};
    cin>>str;

    for(int i=0; str[i]!='\0'; i++){
        frequency[str[i]-97]++;
    }

    char ans = str[0];
    int max = frequency[ans-97];

    for(int j=0; str[j]!='\0'; j++){
        if(max < frequency[str[j]-97]){
            max = frequency[str[j]-97];
            ans = str[j];
        }
    }
    cout<<max<<" "<<ans<< endl;
    return 0;
}