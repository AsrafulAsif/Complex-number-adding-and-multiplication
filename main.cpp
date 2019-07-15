#include "complexnumber.h"
#include<iostream>
#include"complexnumber.cpp"
using namespace std;

int main()
{
    complexNumber<int> c1(4,3);
    complexNumber<int> c2(3,8);
    complexNumber<int> c3;
    complexNumber<int> c4;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"ADD:";
    c3.Print();
    cout<<"Mult:";
    c4.Print();
    if(c1!=c2)
    {

        cout<<"Not same!!";
    }
    else
    {
        cout<<"Same";
    }
}
