#include<stdio.h>
int main()
{
    char str1[]="My name is ";
    char str2[]="Mohammad Moin Uddin.";
    char str3[]="Hello ";

    strcat(str1,str2);
    strcat(str3,"World!");

    printf("str1 = %s\n",str1);
    printf("str3 = %s",str3);


    getch();
}

