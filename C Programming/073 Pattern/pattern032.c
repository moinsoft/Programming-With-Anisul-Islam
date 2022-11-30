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

        // Printing Number,Alphabet,Star and Hash
        for(col=1; col<=2*row-1; col++)
        {
            printf("%d",col);
            //printf("%d",row);
            //printf("%d",col%2);
            //printf("%d",row%2);
            //printf("%c",col+64);  // Capital Letter
            //printf("%c",col+96);  // Small Letter
            //printf("%c",row+64);  // Capital Letter
            //printf("%c",row+96);  // Small Letter
            //printf("*");
            //printf("#");
        }

        printf("\n");
    }

    return 0;
}
