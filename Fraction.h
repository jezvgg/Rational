#include "../Chain/Chain.h"
#include "Rational.h"
#include <iostream>

class Fraction
{
    public:
    Chain<int> layers;

    Fraction(Rational r);
    Fraction(double r);

    operator Rational();

    void show();

    friend std::ostream& operator <<(std::ostream& out, Fraction& f);

    protected:
    void Fractain(long long num, long long denum);

};