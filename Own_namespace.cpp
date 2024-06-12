#include<iostream>
using namespace std;

namespace Jahid
{
    int addition(int x, int y)
    {
        return x + y;
    }
}

namespace Fahim
{
    int subtraction(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    using namespace Jahid;
    using namespace Fahim;
    cout<<addition(5, 3)<<endl;
    cout<<subtraction(5, 3)<<endl;
    return 0;
}
