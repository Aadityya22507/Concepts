#include<stdio.h>

void marvellous()
{
    static int x = 10;
    x++;

    printf("value of x is : %d\n",x);
}
int main()
{
    printf("demonstruction of static : \n");

    marvellous();
    marvellous();
    marvellous();
    
    return 0;
}