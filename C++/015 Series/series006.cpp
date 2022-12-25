#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    // (1x1) + (2x2) + (3x3) ..... + (nxn)

    int num,i,sum=0;

    cout << "Enter the last number of the series : ";
    cin >> num;

    for(i=1; i<=num; i++)
    {
        sum = sum + pow(i,2);      //sum = sum + i*i;

        if(i==1)
        {
            cout << endl << "(1X1) + ";
        }
        else if(i==num)
        {
            cout << "(" << i << "X" << i << ")";
        }
        else
        {
            cout << "(" << i << "X" << i << ") + ";
        }

    }

    cout << " = " << sum;



    getch();
}

