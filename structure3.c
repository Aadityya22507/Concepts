#include<stdio.h>

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

    amit.rollno = 11;
    amit.division = 'a';
    amit.mark = 90.99;
    amit.age = 19;
    amit.salary = 21000;

    pooja.rollno = 21;
    pooja.division = 'd';
    pooja.mark = 93.67;
    pooja.age = 17;
    pooja.salary = 5000;

    printf("age of amit is: %d\n",amit.age);
    printf("age of pooja is: %d\n",pooja.age);

    printf("age of amit is: %d\n",amit.salary);
    printf("age of pooja is: %d\n",pooja.salary);


    return 0;
}
