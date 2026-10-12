#include<stdio.h>

int main(int argc , char *argv[])
{
    int i = 0;

    printf("number of command line arduments are : %d\n",argc);

    for( i = 0 ; i<argc ; i++)
    {
        printf("%s\n",argv[i]);
    }

    return 0;
}

// gcc commamd.c -o myexe.exe
//myexe.exe ppa maevellous 11 lb 21 pune