#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int no, first_largest, second_largest = INT_MIN;

    cin >> no;
    first_largest = no;

    while (i > 1)
    {

        cin >> no;
        if (first_largest < no)
        {
            second_largest = first_largest;
            first_largest = no;
        }

        i--;
    }
    if (i <= 1)
    {
        cout <<"Second Largest NO-->" <<second_largest;
    }

    return 0;
}