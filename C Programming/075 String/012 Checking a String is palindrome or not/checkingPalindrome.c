#include<stdio.h>
int main()
{
    /*
        Palindrome Word Examples:
        madam,civic,level,radar,noon,racecar,deified,minim,murdrum,repaper,rotavator,solos,refer,mom,rotator,wow,
        aibohphobia
    */

    char str1[30]="madam";

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
    printf("\nString Reverse Value = \"%s\"\n",str2);

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("\nString is Palindrome.");
    }
    else
    {
        printf("\nString is not Palindrome.");
    }



    getch();
}

