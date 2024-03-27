#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>
using namespace std;
ostream& operator<<(ostream& os, ComplexNumber& c){
    os<<c.parte_intera<<" + "<<c.parte_immaginaria<<"i";
    return os;
}
ComplexNumber operator+(const ComplexNumber& c, const ComplexNumber& d){
    ComplexNumber ris(c.parte_immaginaria+d.parte_immaginaria,c.parte_intera+d.parte_intera);
    return ris;
}
bool operator==(const ComplexNumber& c, const ComplexNumber& d){
    if (((c.parte_immaginaria-d.parte_immaginaria)<pow(10,-15)) && ((c.parte_intera-d.parte_intera)<pow(10,-15))){
        return true;
    }
    return false;
}
void coniugate(ComplexNumber& c){
    c.parte_immaginaria=-c.parte_immaginaria;

}
