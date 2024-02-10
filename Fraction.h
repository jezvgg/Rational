#include "../Chain/Chain.h"
#include "Rational.h"

class Fraction
{
    public:
    Chain<int> layers;

    Fraction(Rational r);
    Fraction(double r);

    operator Rational();

    void show();

    protected:
    void Fractain(long long num, long long denum);

};