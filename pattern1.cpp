#include <iostream>
using namespace std;
#include<iomanip>

int main()
{

    int n, i = 1, j = 1, k = 1, val = 10;
    cout << "Enter the Number n  ";
    cin >> n;

    while (i <= n)
    {
        j = 1;
        k = 1;
       
//         while(k <= n-i){
// 
//             cout<<" ";
//             k++;
//         }

        cout << setw(4*(n-i));
        while (j <= i)
        {
            cout << val <<" ";
            val++;
            j++;
        }

        cout << endl;
        i++;
        val = val - (i - 2);
    }

    return 0;
}