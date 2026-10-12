#include<iostream>
#include<stdlib.h>
using namespace std;

class demo
{
       public:
       int a , b;
       demo()
       {
           cout<<"inside constructure\n";
           a = 11;
           b = 21;
       }
       ~demo()
       {
          cout<<"inside destructure\n";
       }
       void fun()
       {
         cout<<"inside void fun\n";
       }
};

int main()
{
     demo obj1;

    //demo *p = new demo;

    demo *p = (demo *)malloc(sizeof(demo));
    p->fun();
    cout<<p->a<<"\n";
    cout<<p->b<<"\n";

    
    free(p);

    return 0;
}