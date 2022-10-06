#include<iostream>
using namespace std;

class Complex {
private :
    double real, imag;
public:
    Complex (double r);
    Complex(double r, double i);
    Complex (Complex c1, Complex c2);
    Complex (const Complex & c);
};
Complex :: Complex (double r) {
    cout << "Constructor 1" << endl;
    real = r; imag = 0;
}
Complex :: Complex (double r, double i) {
    cout << "Constructor 2" << endl;
    real = r; imag = i;
}
Complex :: Complex (Complex c1, Complex c2) {
    cout << "Constructor 3" << endl;
    real = c1.real+c2.real;
    imag = c1.imag+c2.imag;
}
Complex :: Complex (const Complex & c)  {
    cout << "Copy Constructor" << endl;
    real = c.real;
    imag = c.imag;
}
int main() {
    // Complex c1(3), c2 (1, 2), c3(c1, c2), c4=7;
    // Complex array[2] = {{4}, {2,3}};
    // Complex *pComx = new Complex(1);
    // delete pComx;
    // Complex *pArray[2] = {new Complex(1), new Complex(2, 1)};
    Complex c1(3), c2 (c1);
    
    return 0;
}