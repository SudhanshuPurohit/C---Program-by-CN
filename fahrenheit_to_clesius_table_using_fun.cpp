#include <iostream>
using namespace std;
void celcius(int fahren);

int main()
{
    int f_s, f_e, f_w;
    cin >> f_s >> f_e >> f_w;

    for (f_s; f_s <= f_e; f_s += f_w)
    {
        celcius(f_s);
    }
    return 0;
}

void celcius(int fahren){
    int cel = (5/9.0)*(fahren -32);
    cout<< fahren <<"\t"<< cel <<endl;
}