#include<stdio.h>

//Global Structure
struct Person
{
    int age;
    float salary;
};



int main()
{
    //Local Variable
    struct Person person1 = {22,2500};
    struct Person person2,person3;

    //Element wise assignment
    person2.age = 25;
    person2.salary = 6000;

    //Structure variable assignment
    person3 = person2;


    printf("\nPerson1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\nPerson2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    printf("\nPerson3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);



    getch();
}


