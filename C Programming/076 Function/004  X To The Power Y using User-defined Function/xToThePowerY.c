#include<stdio.h>

void calculatePower(double base, double exp)
{
    double result=1,i;

    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }

    printf("\n%.0lf To The Power %.0lf = %2.lf",base,exp,result);

}


int main()
{
    double base,exp;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Exponent : ");
    scanf("%lf",&exp);

    calculatePower(base,exp);


    getch();

}
