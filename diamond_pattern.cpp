#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int j = 1;
    int spaces = 1;
    while (i <= (n / 2 + 1))
    {
        j = 1;
        spaces = 1;
        while(spaces <= (n/2+1)-i){
            cout<<" ";
            spaces++;
        }
        while (j <= (2 * i - 1))
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    j =  2*(n/2) - 1;

    while (i <= (n / 2))
    {
        spaces = 1;
        while(spaces<=(i)){
            cout<<" ";
            spaces++;
        }
        int k = 1;
        while(k<=j){
            cout<<"*";
            k++;
        }
        cout<<endl;
        j= j-2;
        i++;
    }

    return 0;
}