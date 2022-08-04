#include <iostream>
using namespace std;
namespace bird{

int main()
{

    int n;
    cin >> n;
    int arr[n], unique[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << endl;

    int j, k;
    bool unique_no;    
    int len_unique = 1;
    unique[0] = arr[0];

    for (j = 1; j < n; j++)
    {

        unique_no = false;
        for (k = 0; k < len_unique; k++)
        {

            if (arr[j] == unique[k])
            {
                unique_no = false;
                break;
            }
            else
            {
                unique_no = true;
            }
        }

        if (unique_no == true) 
        {
            unique[k] = arr[j];
            len_unique++;
        }
    }

    for (int l = 0; l < len_unique; l++)
    {
        cout << unique[l] << " ";
    }
    return (0);
}
}