#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    printf("based address of arr is :%d\n",arr);
    printf("based address of arr is :%d\n",&arr);
    printf("based address of arr is :%d\n",&(arr[0]));

    printf ("first element is: %d\n",(arr[0]));
    printf ("second element is: %d\n",(arr[1]));
    printf ("third element is: %d\n",(arr[3]));

    printf("%d\n",arr[2]);
    printf("%d\n",*(arr + 2));
    printf("%d\n",*(2 + arr));
    printf("%d\n",2[arr]);



    return 0;
}
