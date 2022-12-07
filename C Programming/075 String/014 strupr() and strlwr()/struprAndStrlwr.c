#include<stdio.h>
int main()
{
    char uppercase[]="HELLO BANGLADESH";
    char lowercase[]="mohammad moin uddin";

    printf("Before Change :\n");
    printf("Uppercase = %s\n",uppercase);
    printf("Lowercase = %s\n",lowercase);

    strupr(lowercase);
    strlwr(uppercase);

    printf("\n\nAfter Change :\n");
    printf("Uppercase to Lowercase = %s\n",uppercase);
    printf("Lowercase to Uppercase = %s\n",lowercase);


    getch();
}

