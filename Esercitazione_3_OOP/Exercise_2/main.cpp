#include <iostream>
#include "ComplexNumber.hpp"
using namespace std;
int main()
{
    ComplexNumber x=ComplexNumber(1.9,5);
    ComplexNumber y=ComplexNumber(2,-3.6);
    ComplexNumber z=ComplexNumber(2,-3.6);
    cout<<z<<endl;
    x=x+y;
    cout<<x<<endl;
    if(y==z){
        cout<<"sono vero"<<endl;
    }

    coniugate(x);
    cout<<x<<endl;



    return 0;
}
