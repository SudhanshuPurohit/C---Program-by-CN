#include <iostream>
#include <cstring>
using namespace std;

bool check_permutation(char str1[], char str2[])
{   int count1=0, count2 =0;
    for (int k = 0; str1[k] != '\0'; k++)
    {

        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] == str1[k])
            {
                count1++;
            }
        }
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str2[j] == str1[k])
            {
                count2++;
            }
        }
        if(count1 == count2){
            continue;
            count1 = 0;
            count2 = 0;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char str1[20], str2[20];
    cin >> str1;
    cin >> str2;
    if (strlen(str1) == strlen(str2))
    {
        bool is_pemutation = check_permutation(str1, str2);
        cout<<boolalpha<<is_pemutation;
    }
    else
    {
        cout << "False";
    }

    return 0;
}