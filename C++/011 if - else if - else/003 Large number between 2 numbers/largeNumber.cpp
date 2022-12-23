#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2;

    cout << "Enter 2 integer number : ";
    cin >> num1 >> num2;

    if(num1 > num2)
    {
        cout << num1 << " Large Number";
    }
    else if(num2 > num1)
    {
        cout << num2 << " Large Number";
    }
    else
    {
        cout << "Numbers are equal.";
    }


    getch();
}
