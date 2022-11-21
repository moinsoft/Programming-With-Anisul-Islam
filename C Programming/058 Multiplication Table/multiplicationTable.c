#include<stdio.h>
int main()
{
    /*
        Enter any number : 3

        3 X 1 = 3
        3 X 2 = 6

        .........
        3 X 10 = 30
    */

    while(1)
    {
        int num,i;

        printf("Enter any number : ");
        scanf("%d",&num);

        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n",num,i,num*i);
        }
    }

    return 0;
}
