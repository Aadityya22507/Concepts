#include<iostream>
using namespace std;

const int a = 10; //const global
int b = 20;

class demo
{
      public:
        int x , x;
    demo()
    {x = 10;
    y = 20;}
    void fun(int i , const int j)//const input argment
    { int no1 = 11;
      const int no2 = 21;//const local varirable
      i++;
      j++;
      no1++;
      no2++;
    }
};
int main()
{
    demo obj1;
    const demo obj2; //const object

    obj1.fun(51,101);

    obj1.x++;
    obj1.y++;
    obj1.x++;
    obj2.y++;
    a++;
    b++;



    return 0;
}