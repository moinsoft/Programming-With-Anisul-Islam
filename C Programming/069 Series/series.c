#include<stdio.h>
int main()
{
    // 1 + 2 + 3 + .................+ N

    int num,i,sum=0;

    printf("Enter the last number of the series : ");
    scanf("%d",&num);
    printf("1 + 2 + 3 + ................. + %d",num);

    for(i=0; i<=num; i++)
    {
        sum = sum + i;
    }

    printf(" = %d\n",sum);


    getch();
}
