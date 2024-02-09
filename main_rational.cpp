#include <iostream>
#include "Rational.h"
#include "Fraction.h"

using namespace std;

int main() {
    Fraction f(Rational(415, 94));
    f.show();
    cout << Rational(f);
    return 0;
}