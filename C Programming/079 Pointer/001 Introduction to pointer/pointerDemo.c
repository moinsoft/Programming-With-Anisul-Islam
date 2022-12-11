#include<stdio.h>
int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;

    //printf("Value of x = %d\n",x);
    //printf("Adderss of x = %d\n",&x);   //Decimal value of memory address
    //printf("Adderss of x = %u\n",&x);   //Decimal value of memory address
    //printf("Adderss of x = %x\n",&x);   //Hexadecimal value of memory address

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);


    getch();
}
