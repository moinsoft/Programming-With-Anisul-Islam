#include<stdio.h>
int main()
{
    char str1[30]="Mohammad Moin Uddin";
    char str2[30];

    int i=0,len=0,j=0;

    while(str1[i] != '\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j] = str1[i];
    }

    str2[j] = '\0';


    printf("String Value = \"%s\"\n",str1);
    printf("\nString Reverse Value = \"%s\"",str2);


    getch();
}
