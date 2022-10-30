#include<stdio.h>
int main()
{
    int num1, num2, num3;
    float num4, num5;

    printf("Enter Two integer : ");
    scanf("%d %d",&num1, &num2);

    printf("\nEnter 3rd integer : ");
    scanf("%d",&num3);

    printf("\nEnter Two floating number : ");
    scanf("%f %f",&num4, &num5);

    printf("\nNumbers are : %d, %d %d %.2f %.2f\n",num1,num2,num3,num4,num5);



    return 0;
}
