#include<stdio.h>
int main()
{
    char s1[9];
    char s2[5];
    char s3[] = {'U','d','d','i','n','\0'};
    char s4[] = "Mohammad Moin Uddin";
    char s5[] = "Mohammad Moin \
                Uddin";

    s1[0]= 'M';
    s1[1]= 'o';
    s1[2]= 'h';
    s1[3]= 'a';
    s1[4]= 'm';
    s1[5]= 'm';
    s1[6]= 'a';
    s1[7]= 'd';
    s1[8]= '\0';

    s2[0]= 'M';
    s2[1]= 'o';
    s2[2]= 'i';
    s2[3]= 'n';
    s2[4]= '\0';


    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);
    printf("S3 = %s\n",s3);
    printf("S4 = %s\n",s4);
    printf("S5 = %s\n",s5);




    getch();
}

