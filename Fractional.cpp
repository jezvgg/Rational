#include "Fraction.h"
#include "Rational.h"
#include <iostream>
#include <cmath>

using namespace std;


Fraction::Fraction(Rational r)
{
    Fractain(r.num, r.denum);
}

Fraction::Fraction(double d)
{
    
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
    long long denum = layers.pop();
    int spec;
    cout << '(' << num << '/' << denum << ')' << endl;
    while(!layers.isNull())
    {
        spec = denum;
        denum = num + denum * layers.pop();
        num = spec;
        cout << '(' << num << '/' << denum << ')' << endl;
    }
    return Rational(denum, num);
}

ostream& operator <<(ostream& out, Fraction& f)
{
    out << f.layers;
    return out;
}

void Fraction::show()
{
    cout << layers << endl;
}