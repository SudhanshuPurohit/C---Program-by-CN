#include "iostream"
using namespace std;
#include "bird_sighting.h"

namespace std1
{

    int main()
    {
        bool a = 20;
        cout << sizeof(a) << ends << a;
        return (0);
    }

}

int main()
{
    bool a = 20;
    cout << sizeof(a) << ends << a;
    
    std1::main();
    bird::main();
    return (0);
}
