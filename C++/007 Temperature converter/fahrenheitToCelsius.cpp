#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double fahrenheit,celsius;

    cout << "Enter fahrenheit : ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) / 1.8;

    cout << "Celsius = " << celsius;


    getch();
}
