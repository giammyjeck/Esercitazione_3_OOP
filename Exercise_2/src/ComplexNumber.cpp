#include "ComplexNumber.hpp"


namespace ComplexNumberLibrary{

ComplexNumber ComplexNumber::coniugate()
{

    return ComplexNumber (parteReale, parteImmaginaria = -parteImmaginaria);
}

ostream& operator<<(ostream& os, const ComplexNumber &z)
{
    if(z.parteReale == 0 && z.parteImmaginaria == 0)
        os << 0;
    else if(z.parteReale == 0)
        os << z.parteImmaginaria << "i";
    else if(z.parteImmaginaria == 0)
        os << z.parteReale;
    else if(z.parteImmaginaria > 0)
        os << z.parteReale << "+"<<z.parteImmaginaria<<"i";
    else if(z.parteImmaginaria < 0)
        os << z.parteReale <<z.parteImmaginaria<<"i";
    else
        os << "something went wrong";

    return os;
}

ComplexNumber operator+(const ComplexNumber &z1, const ComplexNumber &z2)
{
    ComplexNumber z3(z1.parteReale+z2.parteReale,z1.parteImmaginaria+z2.parteImmaginaria);
    return z3;
}


bool operator==(const ComplexNumber &z1, const ComplexNumber &z2)
{
    double tol = 10e-16;
    return (fabs(z1.parteReale - z2.parteReale)<=tol && fabs(z1.parteImmaginaria - z2.parteImmaginaria)<=tol);
}


}
