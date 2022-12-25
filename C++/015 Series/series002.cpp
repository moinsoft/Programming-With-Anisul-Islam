#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // 2 + 4 + 6 + 8 ................. + N

    int num,i,sum=0;

    cout << "Enter the last number of the series : ";
    cin >> num;

    cout << "2 + 4 + 6 + 8 ................. + " << num;

    for(i=2; i<=num; i+=2)
    {
        sum = sum + i;
    }

    cout << " = " << sum;


    getch();
}
