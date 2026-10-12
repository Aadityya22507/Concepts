#include<iostream>
using namespace std;

class base
{
      public:
         int a , b;
         void fun() //1000       
         { cout<<"inside base fun\n"; } //D
         void gun() //2000
         { cout<<"inside base gun\n";}  //D
         void sun() //3000
         { cout<<"inside base sun\n"; } //D
         
};

class derived : public base
{ 
       public:
         int x , y;
         void gun() //4000
         { cout<<"inside derived gun\n"; }  //RD
         void sun() //5000
         { cout<<"inside derived sun\n"; }  //RD
         void run() //6000
         { cout<<"inside derived run\n"; }  //D
};

int main()
{
    base bobj;
    derived dobj;

    base * bp = null;
    derived * dp = null;

    bp = &bobj;
    dp = &dobj;

    bp = &dobj;
    dp = &bobj;

    
    

    return 0;
}