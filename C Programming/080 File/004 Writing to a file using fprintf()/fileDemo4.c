#include<stdio.h>
int main()
{
    FILE *moin;

    char name[50];
    int age;

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

        printf("Enter Your Age : ");
        scanf("%d",&age);

        fprintf(moin,"Name = %s\nAge = %d\n\n",name,age);

        printf("\nFile is writen successfully.");

        fclose(moin);
    }


    getch();
}
