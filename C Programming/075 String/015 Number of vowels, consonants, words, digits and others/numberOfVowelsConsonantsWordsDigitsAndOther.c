#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;

    printf("Enter a string : ");
    gets(str);

    i=vowel=consonant=digit=word=other=0;

    while((ch=str[i]) != '\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            vowel++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else
        {
            other++;
        }



        i++;
    }

    word++;

    printf("Number of Vowel = %d\n",vowel);
    printf("Number of Consonant = %d\n",consonant);
    printf("Number of Digit = %d\n",digit);
    printf("Number of Word = %d\n",word);
    printf("Number of Other = %d\n",other);



    getch();
}
