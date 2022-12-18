#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter any number : ");
    scanf("%d",&x);

    printf("\nEnter power of %d : ",x);
    scanf("%d",&y);

    double result = pow(x,y);

    printf("\n%d to the power %d = %.2lf",x,y,result);

    getch();
}
