#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        // Printing Space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        // Printing Number
        for(col=1; col<=row; col++)
        {
            printf("%d",col%2);
            //printf("%d",row%2);
        }

        printf("\n");
    }

    for(row=n-1; row>=1; row--)
    {
        // Printing Space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        // Printing Number
        for(col=1; col<=row; col++)
        {
            printf("%d",col%2);
            //printf("%d",row%2);
        }

        printf("\n");
    }

    return 0;
}
