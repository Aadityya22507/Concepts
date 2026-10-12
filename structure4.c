#include<stdio.h>

#pragma pack(1)
struct student
{
    int rollno;
    char division;
    int age;
    float mark;
    int salary;
};

int main()
{
    struct student amit;
    struct student pooja;

    printf("size of obj is : %d\n",sizeof(amit));

   
    return 0;
}
