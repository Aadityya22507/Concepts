#include<stdio.h>

int main()
{
    int i = 11;
    char ch ='a';
    float f = 90.43;
    double d = 9.435678;
    int arr[5];
    double drr[5];
    float crr[5];
    char brr[5];

    printf("%d\n",sizeof(ch)); 
    printf("%d\n",sizeof(i)); 
    printf("%d\n",sizeof(f)); 
    printf("%d\n",sizeof(d)); 
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(drr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(brr));

    
    return 0;
}