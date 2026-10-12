#include<iostream>

namespace Marvellous
{
    class demo
    {

    };
}

namespace PPA
{
    class hello
    {

    };
}
using namespace Marvellous;

int main()
{
    std ::cout<<"Inside main\n";
    demo dobj;
    PPA ::hello hobj;
    
    return 0;
}