#include <iostream>
using namespace std;
struct ComplexNumber{
    double parte_intera;
    double parte_immaginaria;
    ComplexNumber(double a, double b){
        parte_intera=a;
        parte_immaginaria=b;
    }
    void coniugate(){
        parte_immaginaria= - parte_immaginaria;
    }

    };
ostream& operator<<(ostream& os, ComplexNumber& c);
ComplexNumber operator+(const ComplexNumber& c, const ComplexNumber& d);
bool operator ==(const ComplexNumber& c, const ComplexNumber& d);

