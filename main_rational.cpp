#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
    Rational r(5,6);
    Rational p;
    cout << r.gsd(365, 15);
    // cout << r+r;
    return 0;
}