#include <iostream>
#include "Rational.h"
#include "Fraction.h"

using namespace std;

int main() {
    Fraction f(Rational(415, 94));
    cout << f << endl;
    cout << Rational(f);

    Fraction f2(2.57463);
    cout << f << endl;
    cout << Rational(f);
    return 0;
}