#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>
using namespace std;
ostream& operator<<(ostream& os, ComplexNumber& c){
    if(abs(c.parte_immaginaria - 0) < pow(10,-14)){
        os<<c.parte_intera;
    }
    else {
        if(abs(c.parte_immaginaria- 1) <pow(10,-14)){
           os<<c.parte_intera<<" + "<<"i";
        }
        else if(abs(c.parte_immaginaria+ 1) <pow(10,-14)){
            os<<c.parte_intera<<" - "<<"i";
        }
        else if(c.parte_immaginaria<0){
                os<<c.parte_intera<<" "<<c.parte_immaginaria<<" i";
        }
        else
           os<<c.parte_intera<<" +"<<c.parte_immaginaria<<" i";
    }

    return os;
}
ComplexNumber operator+(const ComplexNumber& c, const ComplexNumber& d){
    ComplexNumber ris(c.parte_intera+d.parte_intera, c.parte_immaginaria+d.parte_immaginaria);
    return ris;
}
bool operator==(const ComplexNumber& c, const ComplexNumber& d){
    if ((abs(c.parte_immaginaria-d.parte_immaginaria)<pow(10,-14)) && ((c.parte_intera-d.parte_intera)<pow(10,-14))){
        return true;
    }
    return false;
}
