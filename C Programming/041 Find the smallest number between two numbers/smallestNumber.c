#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter First number : ");
    scanf("%d",&num1);

    printf("Enter Second number : ");
    scanf("%d",&num2);

    if(num1<num2)
    {
        printf("Num1 = %d Smallest Number\n",num1);
    }
    else if(num2<num1)
    {
        printf("Num2 = %d Smallest Number\n",num2);
    }
    else
    {
        printf("They are equal.\n");
    }
}
