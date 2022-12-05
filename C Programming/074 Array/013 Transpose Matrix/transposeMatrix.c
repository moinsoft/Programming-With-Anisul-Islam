#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],i,j,row,col;

    printf("Enter number of rows and columns for the matrix : ");
    scanf("%d %d",&row,&col);

    //Getting the elements for the matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //Transpose
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }


    //Printing the matrix
    printf("\nEntered Matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }

        printf("\n");
    }


    //Printing transpose matrix
    printf("\nTranspose Matrix\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }

        printf("\n");
    }




    getch();
}
