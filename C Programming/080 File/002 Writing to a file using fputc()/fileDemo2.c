#include<stdio.h>
int main()
{
    FILE *file;

    char name[20] = "Mohammad Moin Uddin";

    int length = strlen(name),i;

    file = fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File is opened.");

        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }

        printf("\nFile is writen successfully.");

        fclose(file);
    }


    getch();
}
