#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,num3;

    cout << "Enter 3 numbers : ";
    cin >> num1 >> num2 >> num3;

    cout << endl << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;
    cout << "Number 3 = " << num3 << endl << endl;

    if(num1>num2 && num1>num3)
    {
        cout << "Large Number : " << num1;
    }
    else if(num2>num1 && num2>num3)
    {
        cout << "Large Number : " << num2;
    }
    else if(num3>num1 && num3>num2)
    {
        cout << "Large Number : " << num3;
    }
    else
    {
        cout << "They are equal.";
    }


    getch();
}
