#include<stdio.h>
#include<stdlib.h> //for malloc,calloc,realloc and free

int main()
{
    int arr[5];    //static memory allocation
    int size = 0;
    int *ptr = NULL;

    printf("enter your number of elements:\n");
    scanf("%d"&size);

    ptr = (int *)calloc(size , sizeof(int));

    //use the memory

    free(ptr);


    return 0;
}