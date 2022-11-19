#include<stdio.h>
int main()
{
    char choice;
    float temp,convertedTemp;

    printf("Temperature Conversion Menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit Temperature : ");
            scanf("%f",&temp);
            convertedTemp = (temp-32)/1.8;
            printf("The temperature in Celsius is : %f\n",convertedTemp);
            break;
        }
    case 2:
        {
            printf("Enter the Celsius Temperature : ");
            scanf("%f",&temp);
            convertedTemp = (1.8*temp)+32;
            printf("The temperature in Fahrenheit is : %f\n",convertedTemp);
            break;
        }
    default:
        printf("Not a correct option.\n");


    }


}

