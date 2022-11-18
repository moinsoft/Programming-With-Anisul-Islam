#include<stdio.h>
int main()
{
    // Write a program that read 3 numbers and display maximum

    int num1,num2,num3;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("Large Number %d\n",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("Large Number %d\n",num2);
    }
    else if(num3>num1 && num3>num2)
    {
        printf("Large Number %d\n",num3);
    }
    else
    {
        printf("Numbers are equal.\n");
    }
}

