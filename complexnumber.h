#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

template<class A>
class complexNumber
{
    public:
        complexNumber();
        complexNumber(A,A);
        complexNumber operator+(complexNumber);
        complexNumber operator*(complexNumber);
        bool operator!=(complexNumber);
        void Print();
        virtual ~complexNumber();



    protected:

    private:
        A Real,Imaginary;
};

#endif // COMPLEXNUMBER_H
