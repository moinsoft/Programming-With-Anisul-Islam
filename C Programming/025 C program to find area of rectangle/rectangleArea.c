//C program to find area of rectangle.

#include<stdio.h>
int main()
{
    double length,width,area;

    printf("Enter length of rectangle : ");
    scanf("%lf",&length);

    printf("Enter width of rectangle : ");
    scanf("%lf",&width);

    area = length * width;

    printf("The area of rectangle = %.2lf",area);


    getch();
}
