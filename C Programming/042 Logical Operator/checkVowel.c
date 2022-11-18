#include<stdio.h>
int main()
{
    // Enter a letter to check vowel or consonant.

    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}
