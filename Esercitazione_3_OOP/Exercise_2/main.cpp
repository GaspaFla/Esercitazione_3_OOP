#include <iostream>
#include "ComplexNumber.hpp"

using namespace std;
int main()
{
    ComplexNumber x=ComplexNumber(1.9,+8);
    ComplexNumber y=ComplexNumber(2,-3.6);
    ComplexNumber z=ComplexNumber(2,1);
    cout<<z<<endl;
    x=x+y;
    cout<<x<<endl;
    if(y==z){
        cout<<"sono vero"<<endl;
    }

    x.coniugate();
    cout<<x<<endl;



    return 0;
}
