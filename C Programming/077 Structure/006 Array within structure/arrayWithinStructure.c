#include<stdio.h>

//Global Structure
struct Person
{
    char name[50];
    int age;
    float salary;
};



int main()
{
    struct Person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("\nEnter information for Person %d : \n",i+1);

        printf("Enter Name : ");
        fflush(stdin);
        gets(person[i].name);

        printf("Enter Age : ");
        scanf("%d",&person[i].age);

        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }

    printf("\n\n\n");

    for(i=0; i<4; i++)
    {
        printf("\nInformation for Person %d : \n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %.2f\n",person[i].salary);
    }


    getch();
}
