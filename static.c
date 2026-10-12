#include<stdio.h>

void marvellous()
{ 
    int x = 10;
    x++;

    printf("value of x is: %d\n",x);

}

int main()
{
    printf("demonstration of register storage class : \n");

    marvellous();
    marvellous();
    marvellous();

    return 0;
}