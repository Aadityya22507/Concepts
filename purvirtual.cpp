#include<iostream>
using namespace std;

class base
{
        public:
            int a , b;
        base()
        { cout<<"base constructure\n"; }
        int addition(int i , int j)//1000
        { return i+j;}
        virtual int substraction(int i , int j)//2000
        { return i-j;}
        virtual int multiplication(int i , int j) = 0;


};
class derived : public base
{
       public:
         int x , y;
        derived()
        {cout<<"derived constructure\n";}
        int substraction(int i , int j)//3000
        { return i-j;}
        int multiplication(int i , int j)//4000
        { return i*j;}
        virtual int division(int i , int j)//5000
        { return i/j;}


};

int main()
{
   // base bobj;
    derived dobj;
    base *bp = &dobj;

    cout<<bp->addition(10,11)<<"\n";//base additional
    cout<<bp->substraction(10,11)<<"\n";//derived sudstraction
    cout<<bp->multiplication(10,11)<<"\n";//derievd multiplicatiob
    //cout<<bp->division(100,10)<<"\n";//error


    return 0;
}