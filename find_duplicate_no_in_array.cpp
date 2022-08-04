#include <iostream>
using namespace std;

int main()
{
    int T, N, no, n;
    int a[20];
    cin >> T;
    while (T--)
    {
        cin >> N;
        n = 0;
        while (n < N)
        {
            cin >> a[n];
            n++;
        }
        n = 0;
        while (n < N)
        {
            int i;
            for (i = 0; i < N; i++)
            {
                if (n == i)
                {
                    continue;
                }
                if (a[n] == a[i])
                {
                    cout << a[n];
                    break;
                }
            }
            if (a[n] == a[i])
            {
                break;
            }
            n++;
        }
    }
}