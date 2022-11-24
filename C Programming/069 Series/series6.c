#include<stdio.h>
int main()
{
    // 1 X 2 X 3 ........... X n

    int n,i,result=1;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result = result * i;

        if(i==1)
        {
            printf("\n1 X ");
        }
        else if(i==n)
        {
            printf("%d",n);
        }
        else
        {
            printf("%d X ",i);
        }
    }

    printf(" = %d\n",result);


    return 0;
}
