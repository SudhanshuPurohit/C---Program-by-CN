#include<iostream>
using namespace std;
// wrong approach 
bool check_permutation(char str1[], char str2[]){
    bool is_permutation = false;
    for(int i=0; str1[i]!='\0'; i++){
        for(int j=0; str2[j]!='\0'; j++){
            if(str1[i] == str2[j]){
               is_permutation = true;
               break;
            }
           
        }
        if(is_permutation){
            is_permutation = false;
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}


int main()
{
    char str1[20] , str2[20];
    cin>>str1;
    cin>>str2;

    bool is_permutation = check_permutation(str1,str2);
    cout<<boolalpha<<is_permutation;


    return 0;
}