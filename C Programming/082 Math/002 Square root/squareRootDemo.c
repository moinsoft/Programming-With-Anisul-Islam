#include<stdio.h>
int main()
{
    int x;

    printf("Enter any number : ");
    scanf("%d",&x);

    double result = sqrt(x);

    printf("Square Root of %d = %.2lf",x,result);

    getch();
}

