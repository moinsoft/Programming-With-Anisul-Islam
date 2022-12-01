#include<stdio.h>
int main()
{
    //Write a program that can take some numbers and display minimum.

    int num[100],n,i;

    printf("\nHow many Numbers : ");
    scanf("%d",&n);

    printf("\nEnter %d Number : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int min = num[0];

    for(i=1; i<n; i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }

    printf("\nMinimum = %d\n",min);


    return 0;
}
