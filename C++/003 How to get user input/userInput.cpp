#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1;
    double num2;
    char ch;
    char name[25];

    int num3,num4,sum;

    cout << "Enter an integer number : ";
    cin >> num1;

    cout << "Enter an double number : ";
    cin >> num2;

    cout << "Enter 2 numbers : ";
    cin >> num3 >> num4;

    sum = num3 + num4;

    cout << "Enter a character : ";
    cin >> ch;

    cout << "Enter your name : ";
    cin >> name;



    cout << "\nEntered number is : " << num1;
    cout << "\nEntered double is : " << num2;
    cout << "\nSum : " << num3 << " + " << num4 << " = " << sum;
    cout << "\nEntered character is : " << ch;
    cout << "\nWelcome : " << name;


    getch();
}
