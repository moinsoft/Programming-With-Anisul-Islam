#include<stdio.h>
int main()
{
    int initialNum,finalNum,i,temp,rem,sum=0;

    printf("Initial Value : ");
    scanf("%d",&initialNum);

    printf("Fainal Value : ");
    scanf("%d",&finalNum);

    for(i=initialNum; i<=finalNum; i++)
    {
        temp = i;

        while(temp!=0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum==i)
        {
            printf("%d\n",i);
        }

        sum=0;
    }


    return 0;
}
