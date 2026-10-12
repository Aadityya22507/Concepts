#include<stdio.h>
#include<stdlib.h> //for malloc,calloc,realloc and free
//bad progammimg practics
int main()
{
    
    int *ptr = NULL;

   

    ptr = (int *)realloc(NULL , 5 * sizeof(int));//malloc

    ptr = (int *)realloc(NULL , 0);


    return 0;
}