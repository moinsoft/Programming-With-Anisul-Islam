#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        // Printing Space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        // Printing Number
        for(col=1; col<=row; col++)
        {
            printf("*");
            //printf("#");
        }

        printf("\n");
    }

    return 0;
}
