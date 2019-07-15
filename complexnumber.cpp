#include "complexnumber.h"
#include<iostream>
using namespace std;
template<class A>
complexNumber<A>::complexNumber()
{
  Real=0;
  Imaginary=0;

}
template<class A>
complexNumber<A>::complexNumber(A r,A i)
{
    Real=r;
    Imaginary=i;

}
template<class A>
complexNumber<A>complexNumber<A>::operator+(complexNumber a)
{
    complexNumber t;
    t.Real=Real+a.Real;
    t.Imaginary=Imaginary+a.Imaginary;
    return t;

}
template <class A>
complexNumber<A>complexNumber<A>::operator*(complexNumber a)
{
    complexNumber t;
    t.Real = (Real * a.Real) - (Imaginary * a.Imaginary);
    t.Imaginary = (Real * a.Imaginary) + (Imaginary * a.Real);
    return t;
}
template <class A>
bool complexNumber<A>::operator !=(complexNumber a)
{
    return (Real != a.Real||Imaginary != a.Imaginary);
}

template<class A>
void complexNumber<A>::Print()
{
    cout<<Real<<"+"<<Imaginary<<"i"<<endl;
   // cout<<Imaginary<<endl;

}

template<class A>
complexNumber<A>::~complexNumber()
{

}
