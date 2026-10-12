#include<iostream>
using namespace std;

class arithematic
{
    public:
       int no1;
       int no2;

    
       arithematic(int a,int b)
       {
            no1 = a;
            no2 = b;
       }
       int addition()
       {
            int ans = 0;
            //ans = no1 + no2;
            ans = this->no1 + this->no2;
            return ans;
       }
       
};

int main()
{
    int ret = 0;
    arithematic obj(21,11);

    ret = obj.addition();
    cout<<"addition is : "<<ret<<"\n";

    return 0;
}