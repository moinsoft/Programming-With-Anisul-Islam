
#include<stdio.h>
int main()
{
    float marks;

    printf("Enter Your Marks : ");
    scanf("%f",&marks);

    if(marks>=80)
    {
        printf("A+\n");
    }
    else if(marks>=70)
    {
        printf("A\n");
    }
    else if(marks>=60)
    {
        printf("A-\n");
    }
    else if(marks>=50)
    {
        printf("B\n");
    }
    else if(marks>=40)
    {
        printf("C\n");
    }
    else if(marks>=33)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }


    return 0;
}

