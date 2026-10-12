#include<iostream>
using namespace std;

class arithmatic
{
      public:
        
        int addition(int no1,int no2)
        {
            return no1 + no2;  
        }
        int addition(int no1,int no2,int no3)
        {
            return no1 + no2 + no3;
        }
        double addition(double no1,double no2)
        {
            return no1 + no2;
        }
        double addition(double no1,double no2,double no3)
        {
            return no1 + no2 + no3;   
        }


};

int main()
{
    arithmatic obj;

    cout<<obj.addition(11,21)<<"\n";
    cout<<obj.addition(11,21,51)<<"\n";
    cout<<obj.addition(89.90,21.67)<<"\n";
    cout<<obj.addition(83.90,47.67,67.99)<<"\n";


    return 0;
}