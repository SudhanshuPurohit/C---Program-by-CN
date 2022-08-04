#include <iostream>
using namespace std;

void trim(char str[])
{
    for (int i = 0; str[i] != '\0';)
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            for (int j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    char str[30];
    cout << "Enter the string: ";
    cin.getline(str, 30);
    trim(str);
    cout << str;
}