#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            printf("%d",col);
            //printf("%d",row);
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
