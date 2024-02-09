#include "Rational.h"
#include <iostream>

using namespace std;

Rational::Rational(){
    num = 0;
    denum = 1;

}

Rational::Rational(int num1, int num2)
{
    num = num1;
    denum = num2;
}

Rational& Rational::operator += (const Rational& r)
{
    num = (num * r.denum + denum * r.num);
    denum *= r.denum;
    return *this;
}

Rational Rational :: operator + (const Rational& r) const
{
    Rational res(*this);
    return res += r;
}

int Rational::gsd(int num1, int num2)
{
    int result = 1;
    for(int dnum = 2; num1 != 1 or num2 != 1; dnum++)
    {
        if(num1%dnum==0 or num2%dnum==0)
        {
            cout << num1 << ' ' << num2 << ' ' << dnum << ' ' << result << endl;
            num1%dnum==0 ? num1/=dnum : num1*1;
            num2%dnum==0 ? num2/=dnum : num1*1;
            result *= dnum;
        }
    }
    return result;
}