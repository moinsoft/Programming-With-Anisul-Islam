#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // 1 + 3 + 5 ................. + N

    int num,i,sum=0;

    cout << "Enter the last number of the series : ";
    cin >> num;

    cout << "1 + 3 + 5 ................. + " << num;

    for(i=1; i<=num; i+=2)
    {
        sum = sum + i;
    }

    cout << " = " << sum;


    getch();
}
