#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4],B[3][4];

    //Scanning A Matrix
    printf("Enter elements for A matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }

        printf("\n");
    }

    //Printing A Matrix
    printf("A = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }

        printf("\n");
    }



    //Scanning B Matrix
    printf("\nEnter elements for B matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }

        printf("\n");
    }

    //Printing B Matrix
    printf("B = ");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",B[i][j]);
        }

        printf("\n");
    }



    getch();
}
