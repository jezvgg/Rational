#include "Fraction.h"
#include "Rational.h"

using namespace std;


Fraction::Fraction(Rational r)
{
    Fractain(r.num, r.denum);
}


void Fraction::Fractain(long long num, long long denum)
{
    int layer, spec;
    while(num > 1 or denum > 1)
    {
        layer = num / denum;
        spec = denum;
        denum = num - (layer*denum);
        num = spec;
        layers.add(layer);
    }
}

Fraction::operator Rational()
{
    long long num = 1;
    long long denum = (long long)layers.pop();
    int spec;
    while(not layers.isNull())
    {
        spec = denum;
        denum = num + denum * (long long)layers.pop();
        num = denum;
        cout << '(' << num << '/' << denum << ')' << endl;
    }
    return Rational(num, denum);
}

void Fraction::show()
{
    cout << layers;
}