#include <iostream>
using namespace std;

void print_array(int arr[][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < (n - i); k++)
        {

            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout<< endl;
        }
    }
}

int main()
{
    int arr[10][10];
    int m, n;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    print_array(arr, n, m);

    return 0;
}