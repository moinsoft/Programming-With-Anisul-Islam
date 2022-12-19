#include<stdio.h>
#include<math.h>
int main()
{
    double x;

    printf("Enter any number : ");
    scanf("%lf",&x);

    //double result = round(x);
    //double result = trunc(x);
    //double result = ceil(x);
    double result = floor(x);

    //printf("\nround(%.2lf) = %.2lf\n",x,result);
    //printf("\ntrunc(%.2lf) = %.2lf\n",x,result);
    //printf("\nceil(%.2lf) = %.2lf\n",x,result);
    printf("\nfloor(%.2lf) = %.2lf\n",x,result);

    getch();
}
