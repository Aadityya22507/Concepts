#include<stdio.h>

struct demo
{
    int no;
    float f;
    double d;
};

int main()
{
    struct demo obj;

    obj.no = 11;
    obj.f = 90.99;
    obj.d = 89,99999;

    printf("%d\n",obj.no);
    printf("%f\n",obj.f);
    printf("%f\n",obj.d);






    return 0;
}