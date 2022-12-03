#include<stdio.h>
int main()
{
    int first[10][10],second[10][10];
    int row1,row2,column1,column2,i,j;

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d",&row1,&column1);

    printf("Enter rows and column for second matrix : ");
    scanf("%d %d",&row2,&column2);

    while(column1!=row2)
    {
        printf("\nError!\nColumn of first matrix not equal to row of second matrix.\nPlease Try Again.\n\n");

        printf("Enter rows and column for first matrix : ");
        scanf("%d %d",&row1,&column1);

        printf("Enter rows and column for second matrix : ");
        scanf("%d %d",&row2,&column2);
    }

    //Taking input for first matrix
    printf("\nEnter elements for first matrix.\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }

        printf("\n");
    }

    //Taking input for second matrix
    printf("Enter elements for second matrix.\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }

        printf("\n");
    }



    //Printing first matrix
    printf("First Matrix = ");
    for(i=0; i<row1; i++)
    {
        printf("\t");
        for(j=0; j<column1; j++)
        {
            printf("%d ",first[i][j]);
        }

        printf("\n\t");
    }


    //Printing second matrix
    printf("\nSecond Matrix = ");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("%d ",second[i][j]);
        }

        printf("\n\t\t");
    }


    getch();
}
