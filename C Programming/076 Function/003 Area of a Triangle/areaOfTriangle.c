#include<stdio.h>

double areaOfTriangle(double b, double h)
{
    return 0.5 * b * h;
}


int main()
{
    double base,height;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Height : ");
    scanf("%lf",&height);

    double area = areaOfTriangle(base,height);

    printf("Area of Triangle : %2.lf\n",area);
    printf("Area of Triangle : %2.lf\n",areaOfTriangle(base,height));


    getch();

}
