#include<stdio.h>

int maximum(int x[])
{
    int i;
    int max = x[0];

    for(i=1; i<7; i++)
    {
        if(max < x[i])
        {
            max = x[i];
        }
    }

    return max;
}

int main()
{
    int num[] = {10,20,300,106,30,40,50};

    int maximumValue = maximum(num);

    printf("Maximum Value = %d",maximumValue);

    getch();

}
