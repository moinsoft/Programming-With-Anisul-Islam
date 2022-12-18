#include<stdio.h>
int main()
{
    FILE *demoFile;

    char ch[100];

    demoFile = fopen("test.txt","r");

    if(demoFile==NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        printf("File is opened.\n\n");

        while(!feof(demoFile))
        {
            //fgets(variable,size,filePointer);
            fgets(ch,30,demoFile);
            printf("%s",ch);
        }


        fclose(demoFile);
    }


    getch();
}
