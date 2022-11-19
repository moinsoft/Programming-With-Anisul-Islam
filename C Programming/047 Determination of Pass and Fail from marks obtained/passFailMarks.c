#include<stdio.h>
int main()
{

    int mark;
    printf("Enter Mark : ");
    scanf("%d",&mark);

    if(mark>=33)
    {
        printf("%d Pass Number\n",mark);
    }
    else
    {
        printf("%d Fail Number\n",mark);
    }
}

