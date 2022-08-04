#include <iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // sum of column in 2d array
    int column_sum = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            column_sum = column_sum + arr[i][j];
        }
        cout<<column_sum<< " ";
        column_sum = 0;
    }

    return 0;
}