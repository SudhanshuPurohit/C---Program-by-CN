#include <iostream>
using namespace std;

int main()
{

    int N, arr[20], X;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> X;

    int total_pair = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if ((arr[i] + arr[j]) == X)
            {
                total_pair++;
            }
        }
    }

    cout << total_pair;

    return (0);
}