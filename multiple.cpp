#include<iostream>
using namespace std;

class demo
{   
    public:
     int a;
     demo()
     {  cout<<"inside demo constructure\n"; 
        a = 10;
    }
    ~demo()
    {
        cout<<"inside demon destructure\n";
    }
    void fun()
    {
        cout<<"inside fun of demo\n";
    }



};
class hello
{   
    public:
      int b;
      hello()
      {
        cout<<"inside hello constructure\n";
        b = 20; 
      }
      ~hello()
      {
        cout<<"inside hello destructure\n";
      }
      void gun()
    {
        cout<<"inside gun of demo\n";
    }




};
class marvellous :public hello, public demo
{
    public:
      int c;
      marvellous()
      {
        c = 30;
        cout<<"inside marvellous constructure\n";
      }
      ~marvellous()
      {
        cout<<"inside marvellous destructure\n";
      }
      void sun()
      {
        cout<<"inside  sun of marvellous\n";
      }



};

int main()
{
    marvellous mobj;

    mobj.fun();
    mobj.gun();
    mobj.sun();

    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";

    return 0;
}
