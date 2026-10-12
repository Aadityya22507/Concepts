#include<stdio.h>

int main()
{
    int no = 11;
    int * ptr = &no;

    double data = 90.9999;
    double * dptr = &data;

    printf("%d\n",no);
    printf("%f\n",data);

    printf("%d\n",sizeof(no));
    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(data));
    printf("%d\n",sizeof(dptr));

    printf("%d\n",*ptr);
    printf("%f\n",*dptr);

    return 0;
}