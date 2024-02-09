#ifndef _RATIONAL_
#define _RATIONAL_

#include <iostream>

using namespace std;

class Rational {

public:
    int num;
    int denum;

    Rational();
    Rational(int num1, int num2);

    Rational& operator *=(const Rational& r);
    Rational operator *(const Rational& r) const;
    Rational& operator += (const Rational& r);
    Rational operator + (const Rational& r) const;
    Rational& operator -= (const Rational& r);
    Rational operator - (const Rational& r) const;
    Rational operator / (const Rational& r) const;
    Rational& operator /= (const Rational& r);

    operator int () const;
    operator double() const;

    friend ostream& operator <<(ostream& out, const Rational& r);

private:
    // упрощение самого себя
    void simple();
    // НОК
    int lcm(int num1, int num2);
    // НОД
    int gcd(int num1, int num2);
};

#endif