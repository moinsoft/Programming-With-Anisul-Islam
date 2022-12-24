#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark;

    cout<<"Enter mark : ";
    cin>>mark;

    if(mark>100 || mark<0)
    {
        cout<<"Invalid Mark";
    }
    else if(mark>=80 && mark<=100)
    {
        cout<<"A+";
    }
    else if(mark>=70 && mark<=79)
    {
        cout<<"A";
    }
    else if(mark>=60 && mark<=69)
    {
        cout<<"A-";
    }
    else if(mark>=50 && mark<=59)
    {
        cout<<"B";
    }
    else if(mark>=40 && mark<=49)
    {
        cout<<"C";
    }
    else if(mark>=33 && mark<=39)
    {
        cout<<"D";
    }
    else
    {
        cout<<"Fail"<<endl;
        cout<<"Best of luck for next time.";
    }


    getch();
}
