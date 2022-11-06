#include<stdio.h>
int main()
{
    int x = 10;

    //int y = x++;
    //int z = ++x;
    //int m = x--;
    //int n = --x;

    //printf("x = %d\n",x);
    //printf("y = %d\n",y);
    //printf("z = %d\n",z);
    //printf("m = %d\n",m);
    //printf("m = %d\n",n);

    printf("x = %d\n",x++);   //x=10
    printf("x = %d\n",x);     //x=11
    printf("x = %d\n",++x);   //x=12
    printf("x = %d\n",x);     //x=12
    printf("x = %d\n",x--);   //x=12
    printf("x = %d\n",--x);   //x=10



    return 0;
}

