#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // 1.5 + 2.5 + 3.5 ................. + N

    float num,i,sum=0;

    cout << "Enter the last number of the series : ";
    cin >> num;

    cout << "1.5 + 2.5 + 3.5 ................. + " << num;

    for(i=1.5; i<=num; i++)
    {
        sum = sum + i;
    }

    cout << " = " << sum;

    getch();
}
