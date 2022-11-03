//C program to find area of triangle

#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Enter base of triangle : ");
    scanf("%f",&base);

    printf("Enter height of triangle : ");
    scanf("%f",&height);

    area = (float)1/2 * base * height;
    printf("The area of triangle = %.2f",area);


    getch();
}

