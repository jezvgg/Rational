#include "Rational.h"
#include <iostream>

using namespace std;

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

ostream& operator <<(ostream& out, const Rational& r)
{
    return out << '(' << r.num << ")/(" << r.denum << ')';
}
