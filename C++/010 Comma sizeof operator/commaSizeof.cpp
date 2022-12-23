#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    //sizeof operator
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int c = sizeof(a);
    cout << c << endl;

    c = sizeof(f);
    cout << c << endl;

    c = sizeof(d);
    cout << c << endl;

    c = sizeof(ch);
    cout << c << endl;

    c = sizeof(name);
    cout << c << endl;

    //comma operator

    int m,n,sum;

    sum = (m=20, n=30, sum=m+n);

    cout <<endl << sum << endl;



    getch();
}
