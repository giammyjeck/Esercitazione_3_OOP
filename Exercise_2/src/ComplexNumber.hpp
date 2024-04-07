
#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber{

    double parteReale;
    double parteImmaginaria;

    ComplexNumber(double a, double b)
    {
        parteReale = a;
        parteImmaginaria = b;
    }

    ComplexNumber() = default;

    ComplexNumber coniugate();

};


ostream& operator<<(ostream& os, const ComplexNumber &z);

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2);

bool operator==(const ComplexNumber &z1, const ComplexNumber &z2);

}

#endif
