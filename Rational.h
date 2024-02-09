#ifndef _RATIONAL_
#define _RATIONAL_

#include <iostream>

using namespace std;

class Rational {
    int num;
    int denum;

public:
    Rational();
    Rational(int num1, int num2);

    Rational& operator *=(const Rational& r);
    Rational operator *(const Rational& r) const;
    Rational& operator += (const Rational& r);
    Rational operator + (const Rational& r) const;
    Rational& operator -= (const Rational& r);
    Rational operator - (const Rational& r) const;
    // Rational operator / (const Rational& r) const;
    // Rational& operator /= (const Rational& r);

    // operator int () const;
    // operator double() const;

    friend ostream& operator <<(ostream& out, const Rational& r);

private:
    void simple();
    int lcm(int num1, int num2);
    int gcd(int num1, int num2);
};

// Rational::Rational(){
//     num = 0;
//     denum = 1;

// }

// Rational::Rational(int num1, int num2)
// {
//     num = num1;
//     denum = num2;
// }

#endif