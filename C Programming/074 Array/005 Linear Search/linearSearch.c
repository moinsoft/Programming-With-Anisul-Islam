#include<stdio.h>
int main()
{
    int num[] = {10,52,60,42,31,33,89,99};
    int value,i,pos=-1;

    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    for(i=0; i<8; i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item is not found.");
    }
    else
    {
        printf("The value is found at position %d",pos);
    }


    getch();
}
