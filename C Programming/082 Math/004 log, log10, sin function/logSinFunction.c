#include<stdio.h>
#include<math.h>
int main()
{
    double x;

    printf("Enter any number : ");
    scanf("%lf",&x);

    //double result = log(x);
    //double result = log10(x);
    //double result = exp(x);
    double result = sin(x);

    //printf("\nlog(%.2lf) = %.2lf\n",x,result);
    //printf("\nlog10(%.2lf) = %.2lf\n",x,result);
    //printf("\nexp(%.2lf) = %.2lf\n",x,result);
    printf("\nsin(%.2lf) = %.2lf\n",x,result);

    getch();
}
