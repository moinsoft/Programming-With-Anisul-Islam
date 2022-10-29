/*
An integer variable num that will contain 10.
write a program that prints an integer number.
*/

/*
write a program that prints a integer, floating,
double number and character.
*/

#include<stdio.h>
int main()
{
    int num1 = 10, num2 = 20;
    float num3 = 30.5;
    double num4 = 20.256486;
    char ch = 'm';
    printf("Number1 is = %d\n",num1);
    printf("Number2 is = %d\n",num2);
    printf("Number3 is = %.1f\n",num3);
    printf("Number4 is = %lf\n",num4);
    printf("Character is = %c\n",ch);

    printf("Numbers and character are %d, %d, %.1f, %lf, %c\n",num1,num2,num3,  num4,ch);


    /*
    write a program that takes an integer
    and print that number.
    */

    int number;
    printf("Please enter an integer number = ");
    scanf("%d", &number);
    printf("You have pressed : %d",number);

    getch();

}
