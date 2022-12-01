#include<stdio.h>
int main()
{
    //Write a program that can take some numbers and display maximum.

    int num[100],n,i;

    printf("\nHow many Numbers : ");
    scanf("%d",&n);

    printf("\nEnter %d Number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int max = num[0];

    for(i=1; i<n; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }

    printf("\nMaximum = %d\n",max);


    return 0;
}
