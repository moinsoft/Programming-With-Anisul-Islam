#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1,num2,sum,sub,mul,rem;
    double div;

    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;


    cout << setw(25) << endl << "Sum is : " << sum << endl;

    //cout << noshowpoint;

    cout << setw(25) << "Subtraction is : " << sub << endl;
    cout << setw(25) << "Multiplication is : " << mul << endl;
    cout << setw(25) << "Division is : " << div << endl;


    getch();
}
