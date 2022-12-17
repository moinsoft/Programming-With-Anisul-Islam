#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    int *ptr1=&x,*ptr2=&y;

    //Before Swapping
    printf("Before Swapping\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    //Swapping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    //After Swapping
    printf("\nAfter Swapping\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);


    getch();
}
