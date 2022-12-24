#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout << "Enter any integer number : ";
    cin >> num;

    (num%2==0) ? cout << num << " is even number" : cout << num << " is odd number";


    getch();

}
