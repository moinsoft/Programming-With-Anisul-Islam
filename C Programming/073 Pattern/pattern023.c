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
            printf("%c",col+64);  // col+96 (Small Letter)
            //printf("%c",row+96);  // row+96 (Small Letter)
        }

        printf("\n");
    }

    return 0;
}
