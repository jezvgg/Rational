#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
    Rational r(5,365);
    Rational p(1, 15);
    cout << r+p << endl;
    cout << p-r << endl;
    cout << r*p << endl;
    return 0;
}