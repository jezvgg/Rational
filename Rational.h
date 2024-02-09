#include <iostream>

using namespace std;

class Rational {
    int num;
    int denum;

public:
    Rational(int num1, int num2);
   
    Rational& operator += (const Rational& r);
   
    Rational operator + (const Rational& r) const;

    friend ostream& operator <<(ostream& out, const Rational& r);
};