#include<stdio.h>

int sumTwoDigit(int a, int b)
{
    return a+b;
}

int sumThreeDigit(int a, int b, int c)
{
    return a+b+c;
}

void sumWithoutReturn(int a, int b, int c)
{
    printf("The Sum Of Three Digit Without Return : %d\n",a+b+c);
}

void subWithoutReturn(int a, int b)
{
    printf("The Subtraction Of Two Digit Without Return : %d\n",a-b);
}

int main()
{
    printf("The Sum Of Two Digit : %d\n",sumTwoDigit(5,6));
    printf("The Sum Of Three Digit : %d\n",sumThreeDigit(11,11,11));

    sumWithoutReturn(11,11,11);

    subWithoutReturn(20,15);


    getch();

}
