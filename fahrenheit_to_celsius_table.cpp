#include <iostream>
using namespace std;

int main()
{

    int s, e, w, fah, celcius;

    cout << "Enter the value of s, e, w respectively" << endl;
    cin >> s >> e >> w;

    fah = s;
    while (fah >= s && fah <= e)
    {
        celcius = (5.0 / 9) * (fah - 32);
        cout << fah << '\t' << celcius << endl;
        fah = fah + w;
    }

    return (0);
}