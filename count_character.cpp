#include<iostream>
using namespace std;

int main()
{
    char c = cin.get();
    int alpa_count=0 , white_space_count=0 , digi_count=0;

    while(c!='$'){
        if (c>=48 && c<58 )
        {
            digi_count++;
        }
        else if(c>=97 && c<=122){
            alpa_count++;
        }
        else if(c == ' ' || c=='\t' || c=='\n'){
            white_space_count++;
        }
        
        c = cin.get();

    }

    cout<<alpa_count<<digi_count<<white_space_count;
    
    return 0;
}