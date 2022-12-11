#include<stdio.h>

struct book
{
    char name[50];
    int age;
};


int main()
{
    typedef char moin;

    typedef struct book moinuddin;

    moinuddin m = {"Mohammad Moin Uddin",60};

    moin ch1 = 'M';
    moin ch2 = 'o';
    moin ch3 = 'i';
    moin ch4 = 'n';

    printf("ch1 = %c\n",ch1);
    printf("ch2 = %c\n",ch2);
    printf("ch3 = %c\n",ch3);
    printf("ch4 = %c\n",ch4);

    printf("\nFull Name = %s\n",m.name);
    printf("Age = %d\n",m.age);


    getch();
}
