#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double celsius,fahrenheit;

    cout << "Enter celsius : ";
    cin >> celsius;

    fahrenheit = 1.8 * celsius + 32;

    cout << "Fahrenheit = " << fahrenheit;


    getch();
}
