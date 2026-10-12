#include<iostream>
using namespace std;

class demo
{
       public:
           int no1 , no2; //non static
           static int x;  //static


           demo()
           {
                 no1 = 10;
                 no2 = 20;
                 
           }
           void fun()//non static b
           {
                cout<<"inside void fun\n";
                cout<<no1<<"\n";
                cout<<x<<"\n";
           }
           static void gun()//static b
           {
               cout<<"inside void gun\n";
               cout<<x<<"\n";
           }
};
int demo :: x = 15;
int main()
{
    cout<<"value if x is:"<<demo::x<<"\n";
    demo::gun();

    demo obj1;
    demo obj2;

    cout<<"size of obj is :"<<sizeof(obj1)<<"\n";
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";

    obj1.fun();
    obj2.fun();

    obj1.gun();
    cout<<"value of x using obj is :"<<obj1.x<<"\n";

    return 0;
}