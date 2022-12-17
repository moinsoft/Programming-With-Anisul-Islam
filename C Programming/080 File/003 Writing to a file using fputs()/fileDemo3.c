#include<stdio.h>
int main()
{
    FILE *moin;

    char name[20];

    moin = fopen("test.txt","a");

    if(moin==NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        printf("File is opened.\n");
        printf("Enter Your Fullname : ");
        gets(name);

        fputs(name,moin);
        fputs("\n",moin);

        printf("\nFile is writen successfully.");

        fclose(moin);
    }


    getch();
}
