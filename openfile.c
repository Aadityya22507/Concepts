#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// O_RDONLY read only
//O_WRONLY write only
//O_RDWR read + write
int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter name of the file that you want to open:\n");
    scanf("%s",Name);

    fd = open(Name , O_RDWR);
    if(fd == -1)
    {
        printf("unable to open file\n");
    }
    else{
        printf("file gets opened with FD %d\n",fd);

    }

    close(fd);

    return 0;
}