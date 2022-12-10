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


    if(person2.age==person3.age && person2.salary==person3.salary)
    {
        printf("Person2 equal to person3");
    }
    else
    {
        printf("Person2 not equal to person3");
    }



    getch();
}
