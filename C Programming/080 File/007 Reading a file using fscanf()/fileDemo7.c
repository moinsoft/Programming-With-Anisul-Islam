#include<stdio.h>
int main()
{
    FILE *demoFile;

    char firstName[30];
    char middleName[30];
    char lastName[30];
    int age;

    demoFile = fopen("test.txt","r");

    if(demoFile==NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        printf("File is opened.\n\n");

        //fscanf(filePointer,formatSpecifier,variableName);
        fscanf(demoFile,"%s %s %s %d",&firstName,&middleName,&lastName,&age);
        printf("%s %s %s %d\n",firstName,middleName,lastName,age);

        fclose(demoFile);
    }


    getch();
}
