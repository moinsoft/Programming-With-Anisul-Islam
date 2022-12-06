#include<stdio.h>
int main()
{
    char source[]="Mohammad Moin Uddin";
    char target[20];

    strcpy(target,source);

    printf("Source String = %s\n",source);
    printf("Target String = %s\n",target);


    getch();
}
