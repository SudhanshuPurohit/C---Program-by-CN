#include <iostream>
#include <cstring>
using namespace std;

bool check(int count , int i , int j, int n)
{
    if (count == 1)
    {
        return (j < n - i);
    }
    else
    {
        return (j <= n - i);
    }
}

void printSubstring(char str[])
{
    int n = strlen(str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
        for (int j = i; j<n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << str[k] ;
            }
            cout << endl;
        }
    }
}

int main()
{
    char str[20];
    cin >> str;
    printSubstring(str);
    return 0;
}