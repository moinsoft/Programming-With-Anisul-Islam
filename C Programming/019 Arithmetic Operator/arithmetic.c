//Write a program that takes two integer and display sum

#include<stdio.h>
int main()
{
    int num1,num2,result;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("The sum is = %d\n",result);

    result = num1 - num2;
    printf("The sub is = %d\n",result);

    result = num1 * num2;
    printf("The multiplication is = %d\n",result);

    result = num1 / num2;
    printf("The division is = %d\n",result);

    result = num1 % num2;
    printf("The remainder is = %d\n",result);

    avg = (float)result/2;  //Type Casting
    printf("The average is = %.2f\n",avg);


    getch();
}
