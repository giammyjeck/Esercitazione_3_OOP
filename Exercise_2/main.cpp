#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>


using namespace ComplexNumberLibrary;
using namespace std;

int main()
{
    // esperimenti e test

    ComplexNumber z;
    cout << "default value: " << z<<endl;

    ComplexNumber z1(1,2);
    ComplexNumber z2(1,-2);
    cout << "z1: "<<z1<<endl;
    cout << "z2: "<<z2<<endl;

    ComplexNumber z3 = z1 + z2;
    cout << "sum of z1 + z2 is: "<<z3<<endl;

    ComplexNumber z4 = z2.coniugate();
    if (z1 == z4){
        cout << "z1 and z4 are equivalents: "<<"z1: "<<z1<<" "<<"z4: "<<z4<<endl;}
    else{
        cout<< "z1 and z4 are NOT equivalents: "<<"z1: "<<z1<<" "<<"z4: "<<z4<<endl;}


    ComplexNumber z5 = z.coniugate();
    if (z1 == z5){
        cout << "z1 and z5 are equivalents: "<<"z1: "<<z1<<" "<<"z5: "<<z5<<endl;}
    else{
        cout<< "z1 and z5 are NOT equivalents: "<<"z1: "<<z1<<" "<<"z5: "<<z5<<endl;}


    ComplexNumber z6(0.566,0);
    cout <<"z6: "<< z6<<endl;

    ComplexNumber z7(0,0);
    cout <<"z7: "<< z7<<endl;

    ComplexNumber z8(0,-3.76789);
    cout <<"z8: "<< z8<<endl;

    ComplexNumber sum = z7+z8+z6;
    cout <<"sum of z7 and z8 and z6: "<< sum <<endl;

    return 0;
}
