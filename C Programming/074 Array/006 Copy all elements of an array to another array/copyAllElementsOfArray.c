#include<stdio.h>
int main()
{
    int n,i,array1[40],array2[40];

    printf("How many numbers : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }


    printf("Array1 : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }

    //Copying all the elements from array1 to array2
    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }


    printf("\nArray2 : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }



    getch();
}

