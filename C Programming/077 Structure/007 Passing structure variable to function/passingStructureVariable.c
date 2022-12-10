#include<stdio.h>

//Global Structure
struct Person
{
    char name[30];
    int age;
    float salary;
};

void display(struct Person x)
{
    printf("\nName : %s\n",x.name);
    printf("Age : %d\n",x.age);
    printf("Salary : %.2f\n",x.salary);
}

int main()
{
    struct Person person1,person2;

    strcpy(person1.name,"Anisul Islam Rubel");
    person1.age = 30;
    person1.salary = 30000;
    display(person1);

    strcpy(person2.name,"Mohammad Moin Uddin");
    person2.age = 60;
    person2.salary = 60000;
    display(person2);


    getch();
}
