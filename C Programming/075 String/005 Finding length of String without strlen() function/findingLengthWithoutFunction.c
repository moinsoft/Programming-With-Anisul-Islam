#include<stdio.h>
int main()
{
    char s1[]="Mohammad Moin Uddin";

    int i=0,len=0;

    while(s1[i] != '\0')
    {
        i++;
        len++;
    }

    printf("Length of %s = %d\n",s1,len);


    getch();
}


