#include<stdio.h>

//Global Structure
struct Person
{
    int age;
    float salary;
};



int main()
{
    struct Person person1,person2;

    printf("Enter informaton for Person1 : \n");
    printf("Enter Age : ");
    scanf("%d",&person1.age);

    printf("Enter Salary : ");
    scanf("%f",&person1.salary);

    printf("\nPerson1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\nEnter informaton for Person2 : \n");
    printf("Enter Age : ");
    scanf("%d",&person2.age);

    printf("Enter Salary : ");
    scanf("%f",&person2.salary);

    printf("\nPerson2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);



    getch();
}

