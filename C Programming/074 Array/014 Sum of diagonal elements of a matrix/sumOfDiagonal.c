#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;

    //Getting the elements for the matrix
    printf("\nEnter the element for the matrix.\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //Printing the matrix
    printf("\nEntered Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }

        printf("\n");
    }


    //Sum of diagonal elements
    printf("\nDiagonal Elements : ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    printf("\n\nSum of diagonal elements = %d\n",sum);


    getch();

}
