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
    int scm = lcm(denum, r.denum);
    num = (num * (scm/denum) + r.num * (scm/r.denum));
    denum = scm;
    return *this;
}

Rational Rational :: operator + (const Rational& r) const
{
    Rational res(*this);
    return res += r;
}

Rational& Rational::operator -= (const Rational& r)
{
    int scm = lcm(denum, r.denum);
    num = (num * (scm/denum) - r.num * (scm/r.denum));
    denum = scm;
    return *this;
}

Rational Rational :: operator - (const Rational& r) const
{
    Rational res(*this);
    return res -= r;
}

Rational& Rational::operator *= (const Rational& r)
{
    num *= r.num;
    denum *= r.denum;
    simple();
    return *this;
}

Rational Rational :: operator * (const Rational& r) const
{
    Rational res(*this);
    return res *= r;
}

ostream& operator <<(ostream& out, const Rational& r)
{
    return out << '(' << r.num << ")/(" << r.denum << ')';
}

int Rational::lcm(int num1, int num2)
{
    int result = 1;
    for(int dnum = 2; num1 != 1 or num2 != 1; dnum++)
    {
        if(num1%dnum==0 or num2%dnum==0)
        {
            num1%dnum==0 ? num1/=dnum : num1*1;
            num2%dnum==0 ? num2/=dnum : num1*1;
            result *= dnum;
        }
    }
    return result;
}

int Rational::gcd(int num1, int num2)
{
    while (num1 && num2)
        if (num1 >= num2)
           num1 %= num2;
        else
           num2 %= num1;
    return num1 | num2;
}

void Rational::simple()
{
    int gct = gcd(num, denum);
    num /= gct;
    denum /= gct; 
}