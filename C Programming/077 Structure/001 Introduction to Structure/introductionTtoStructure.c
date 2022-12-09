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

    person1.age = 30;
    person1.salary = 30000.55;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    person2.age = 24;
    person2.salary = 13000.47;

    printf("\nPerson2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);



    getch();
}
