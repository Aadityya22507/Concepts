#include<stdio.h>
#include<stdlib.h> //for malloc,calloc,realloc and free

int main()
{
    
    int *ptr = NULL;

     ptr = (int *)malloc(5 * sizeof(int));

    //use the memory

    ptr = (int *)realloc(ptr , 10 * sizeof(int));

    printf("byb");

    free(ptr);


    return 0;
}