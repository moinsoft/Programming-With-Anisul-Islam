#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // 1 + 2 + 3 + .................+ N

    int num,i,sum=0;

    cout << "Enter the last number of the series : ";
    cin >> num;

    cout << "1 + 2 + 3 + ................. + " << num;

    for(i=0; i<=num; i++)
    {
        sum = sum + i;
    }

    cout << " = " << sum;


    getch();
}
