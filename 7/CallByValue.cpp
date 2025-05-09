#include <stdio.h>

// double型のaを受け取り、aを2倍にして返す関数
double func(double a)
{
    a = a * 2.0;
    return a;
}

int main(void)
{
    // definition
    double a, ans;

    // initialization
    a = 11.11;

    // call of func
    ans = func(a);

    // output
    printf("a = %f, ans = %f\n", a, ans);

    return 0;
}
