#include<stdio.h>
int multiplication(int no1 , int no2)
{
    int ans = 0;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int value1 = 0, value2 = 0, ret = 0;

    int (*fptr)(int,int);

    fptr = multiplication;

    printf("enter first number: \n");
    scanf("%d",&value1);

    printf("enter second number: \n");
    scanf("%d",&value2);

    ret = fptr(value1,value2);

    printf("multiplication is: %d\n",ret);

    return 0;
}