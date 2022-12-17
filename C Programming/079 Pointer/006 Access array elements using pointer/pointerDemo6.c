#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    int *ptr = &a[0],i;

    for(i=0; i<5; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }


    getch();
}
