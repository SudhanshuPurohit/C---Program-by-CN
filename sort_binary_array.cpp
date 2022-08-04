#include <iostream>
using namespace std;

int main()
{
    int N, bin_arr[20];
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> bin_arr[i];
    }

    int total_one = 0;

    for (int i = 0; i < N; i++)
    {
        if (bin_arr[i] == 1)
        {
            total_one++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (i < N-total_one)
        {
            bin_arr[i] = 0;
        }
        else
        {
            bin_arr[i] = 1;
        }
    }

    for (int i = 0; i < N; i++)  
    {
        cout << bin_arr[i] << " " ;
    }

    return 0;
}