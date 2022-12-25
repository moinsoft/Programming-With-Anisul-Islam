#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    // 1 + (1/2) + (1/3) + (1/4) ........... + 1/n

    double num,i,sum=0;

    cout << "Enter the last number of the series : ";
    cin >> num;


    for(i=1; i<=num; i++)
    {
        sum = sum + (1/i);

        if(i==1)
        {
            cout << endl << "1 + ";
        }
        else if(i==num)
        {
            cout << "(1/" << i << ")";
        }
        else
        {
            cout << "(1/" << i << ") + ";
        }
    }

    cout << fixed;
    cout << setprecision(2);

    cout << " = " << sum;



    getch();
}
