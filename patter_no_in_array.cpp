#include <iostream>
using namespace std;

int main()
{
    int arr[10], N;
    cin >> N;
    int s = 0, e = N - 1, val = 1;
    for (int i = 0; i < (N + 1) / 2; i++)
    {
        arr[s] = val;

        if (N % 2 != 0 && i == (N - 1) / 2)
        {
            break;
        }
        else
        {
            val++;
            arr[e] = val;
        }
        s++;
        e--;
        val++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}