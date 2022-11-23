#include<stdio.h>
int main()
{
    // 2 + 4 + 6 + .................+ N

    int num,sum=0,a=2;

    printf("Enter the last number : ");
    scanf("%d",&num);

    printf("2 + 4 + 6 + ................. + %d",num);

    while(a<=num)
    {
        sum = sum + a;
        a = a + 2;
    }

    printf(" = %d\n",sum);


    getch();
}
