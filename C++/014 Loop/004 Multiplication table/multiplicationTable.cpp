#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,i;

    cout << "Enter any integer : ";
    cin >> num;

    cout << endl;

    for(i=1; i<=10; i++)
    {
        cout << num << " X " << i << " = " << (num*i) << endl;
    }


    getch();
}
