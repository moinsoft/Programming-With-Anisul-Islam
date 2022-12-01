#include<stdio.h>
int main()
{
    //Write a program that read 10 numbers and display their sum and average.

    int n,marks[10],i,sum=0;

    printf("\nHow many Numbers : ");
    scanf("%d",&n);

    printf("\nEnter %d Number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0; i<n; i++)
    {
        sum += marks[i];
    }

    printf("\nThe sum is : %d\n",sum);
    printf("\nThe average is : %.2f\n",(float)sum/n);



    return 0;
}
