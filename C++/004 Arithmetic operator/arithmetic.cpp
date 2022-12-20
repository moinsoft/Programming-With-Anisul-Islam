#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,sum,sub,mul,rem;
    double div;

    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;  // Type Casting
    rem = num1 % num2;

    cout << "Sum is : " << sum << endl;
    cout << "Subtraction is : " << sub << endl;
    cout << "Multiplication is : " << mul << endl;
    cout << "Division is : " << div << endl;
    cout << "Remainder is : " << rem << endl;


    getch();
}
