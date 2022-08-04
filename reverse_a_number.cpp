#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n % 10 == 0)
    {
        n = n / 10;
    }

    int last_digit, reverse_no = 0;
    while (n >= 0)
    {

        last_digit = n % 10;
        reverse_no  = reverse_no*10 + last_digit;
        n /= 10;
    }
    cout << reverse_no;

    return (0);
}