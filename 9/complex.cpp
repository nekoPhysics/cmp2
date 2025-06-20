#include <stdio.h>
#include <iostream>
#include <complex>
using namespace std;

#define PI 3.1415926535

const complex<double> I(0.0, 1.0);

int main(void) {
    complex<double> a(0.1, 2.1);
    complex<double> b, c;

    cout << "a=" << a << "\n" << "b=" << b << "\n";
    printf("a = (%.3f) + I*(%.3f) \n", a.real(), a.imag());
    printf("b = (%.3f) + I*(%.3f) \n", b.real(), b.imag());

    a.real(0.5);
    a.imag(sqrt(3.0) / 2.0);
    cout << "a=" << a << "\n";

    b = exp(-I * PI / 3.0);
    cout << "b=" << b << "\n\n";

    cout << "a+b=" << a + b << "\n";
    cout << "a−b=" << a - b << "\n";
    cout << "a*b=" << a * b << "\n";
    cout << "a/b=" << a / b << "\n";

    cout << "abs(a): " << abs(a) << "\n";
    cout << "conj(a): " << conj(a) << "\n";
    cout << "sqrt(-1): " << sqrt(complex<double>(-1.0, 0.0)) << "\n";
    cout << "sqrt(-1): " << sqrt(-1.0) << "\n";

    return 0;
}
