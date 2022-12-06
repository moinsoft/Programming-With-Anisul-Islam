
#include<stdio.h>
int main()
{
    int A[3][3],i,j,upperSum=0,lowerSum=0;

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


    //Sum of upper and lower triangle elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }

            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }

    printf("\n\nSum of upper triangle elements = %d\n",upperSum);
    printf("\n\nSum of lower triangle elements = %d\n",lowerSum);


    getch();

}
