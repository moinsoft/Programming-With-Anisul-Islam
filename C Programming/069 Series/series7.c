#include<stdio.h>
int main()
{
    // (1x1) X (3x2) X (5x3) ..... X (nxn)

    int n,i,result=1;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i+=2)
    {
        result = result * i*i;

        if(i==1)
        {
            printf("\n(1X1) X ");
        }
        else if(i==n)
        {
            printf("(%dX%d)",n,n);
        }
        else
        {
            printf("(%dX%d) X ",i,i);
        }

    }

    printf(" = %d\n",result);


    return 0;
}

