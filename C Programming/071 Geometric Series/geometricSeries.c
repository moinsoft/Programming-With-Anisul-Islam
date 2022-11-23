#include<stdio.h>
int main()
{
    // 1*3*4 + 2*5*6 + 3*7*8 + .................+ num1*num2*num3

    int num1,num2,num3,sum=0,a=1,b=3,c=4;

    printf("Enter num1, num2 and num3 : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("1*3*4 + 2*5*6 + 3*7*8 + .................+ %d * %d * %d",num1,num2,num3);

    while(a<=num1 && b<=num2 && c<=num3)
    {
        sum = sum + a*b*c;
        a = a + 1;
        b = b + 2;
        c = c + 2;
    }

    printf(" = %d\n",sum);


    getch();
}
