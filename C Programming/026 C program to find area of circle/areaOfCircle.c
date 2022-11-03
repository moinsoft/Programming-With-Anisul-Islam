//C program to find area of circle

#include<stdio.h>
#include<math.h>
int main()
{
    double radius,area;

    printf("Enter radius of circle : ");
    scanf("%lf",&radius);

    area = M_PI * radius * radius;

    printf("The area of circle = %.2lf",area);


    getch();
}
