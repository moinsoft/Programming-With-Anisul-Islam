#include<stdio.h>
int main()
{
    FILE *demo;

    char ch;

    demo = fopen("test.txt","r");

    if(demo==NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        printf("File is opened.\n\n");

        while(!feof(demo))
        {
            ch = fgetc(demo);
            printf("%c",ch);
        }


        fclose(demo);
    }


    getch();
}
