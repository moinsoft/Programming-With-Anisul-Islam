#include<stdio.h>
int main()
{
    char s1[]="Mohammad Moin Uddin";
    int i=0;

    printf("S1 = %s\n\n",s1);

    while(s1[i] != '\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }


    getch();
}

