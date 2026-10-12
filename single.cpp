#include<iostream>
using namespace std;

class  base
{
     public:
        int a , b;
        base()
        {  cout<<"inside constructor\n";
           a = 11; 
           b = 21; 
        }
        ~base()
        {  cout<<"inside destructor\n  ";}
        void fun()
        {  cout<<"inside base fun\n";  }
};

class derived : public base
{
      public:
        int x,y;
        derived()
        {  cout<<"inside derived constructor\n";  
            x = 51;
            y = 101;
        }
        ~derived()
        { cout<<"inside derived destructor\n ";  }
        void gun()
        {  cout<<"inside derived gun \n"; }
};

int main()
{
    derived dobj;
    cout<<"size of obj is :"<<sizeof(dobj)<<"\n";

    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.fun();
    dobj.gun();

    return 0;
}