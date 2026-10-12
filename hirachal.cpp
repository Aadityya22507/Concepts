#include<iostream>
using namespace std;
class marvellous 
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

class demo : public marvellous
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
class hello : public marvellous
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


int main()
{
    demo dobj;
    hello hobj;
    

    return 0;
}