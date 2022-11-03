//Fahrenheit to Centigrade

#include<stdio.h>
int main()
{
    float f,c;

    printf("Enter Fahrenheit : ");
    scanf("%f",&f);

    c = (f - 32) / 1.8;
    printf("Centigrade = %.2f\n",c);


    getch();
}

