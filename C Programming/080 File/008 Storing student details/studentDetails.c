#include<stdio.h>
int main()
{
    FILE *filePointer;

    char name[30];
    int studentNumber,i,age,phoneNumber;

    filePointer = fopen("studentDetails.txt","a");

    if(filePointer==NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        printf("File is opened.\n\n");

        printf("Enter number of students : ");
        scanf("%d",&studentNumber);

        for(i=0; i<studentNumber; i++)
        {
            printf("\nEnter Student Name : ");
            fflush(stdin);
            gets(name);

            printf("Enter Student Age : ");
            scanf("%d",&age);

            printf("Enter Student Phone Number : ");
            scanf("%d",&phoneNumber);

            //fprintf(filePointer,formatSpecifier,variableName);
            fprintf(filePointer,"\n%s\t\t%d\t\t%d\n",name,age,phoneNumber);
        }


        fclose(filePointer);
    }


    return 0;
}
