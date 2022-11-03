//C program to find the area of the length of 3 sides of a triangle.

#include<stdio.h>
int main()
{
    double a,b,c,s,area;

    printf("Enter three value for triangle : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a + b + c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("The area of the length of 3 sides of a triangle = %.2lf",area);


    getch();
}


