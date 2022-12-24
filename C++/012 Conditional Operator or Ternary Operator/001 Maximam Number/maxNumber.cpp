#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2;

    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;

    cout << endl << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl << endl;

    int maximam = (num1>num2) ? num1 : num2;

    cout << "Maximam Number = " << maximam;


    getch();

}
