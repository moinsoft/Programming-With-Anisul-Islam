//C program to find sum and average of 3 integers

#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1 + num2 + num3;
    printf("The sum of three numbers = %d\n",sum);

    avg = (float)sum/3;
    printf("The average of three numbers = %.2f",avg);


    getch();
}
