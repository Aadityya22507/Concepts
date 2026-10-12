#include<iostream>
using namespace std;

class demo
{
      public:
        int x,y;
      demo()
      {
        x = 10;
        y = 20;
      }
      void fun()//non constuct function
      {
        cout<<"inside fun\n";
        x++;
        y++;
      }

      void gun() const //constuct function
      {
        cout<<"inside gun\n";
        //x++;
        //y++;
      }
    
    
};
int main()
{
    demo obj1;
    const demo obj2;

    obj1.fun(); //nonf
    obj1.gun(); //nocf

    obj2.fun(); //conf  not allowed
    obj2.gun(); //cocf

    


    return 0;
}