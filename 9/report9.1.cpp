#include <iostream>
#include <complex>
using namespace std;

int main(void){
    double a, b, c;
    complex<double>x1, x2, d;

    a=4.0;
    b=2.0;
    c=1.0;
    cout << "ax^2 + bx + c = 0.0\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";

    d = sqrt(complex<double>(b * b - 4.0 * a * c));
    x1 = (-b + d) / (2.0 * a);
    x2 = (-b - d) / (2.0 * a);

    printf("x1 = %.2f + I*%.2f, x2 = %.2f + I*%.2f\n", x1.real(), x1.imag(), x2.real(), x2.imag());
    printf("d = %.2f + I*%.2f\n", d.real(), d.imag());

    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";

    return 0;
}