#include<stdio.h>
#include<math.h>
#define PI 3.1415926535


double Intgrl(double a, double b, int N);


int main (void){
    double a, b, ans;
    int N;

    a = 0.0;
    b = PI;
    N = 1000;

    ans = Intgrl(a, b, N);
    printf("Integral of sin(x)");
    printf("from %2.2f to %2.2f = %2.2f\n", a, b, ans);

    return 0;
}

double Intgrl(double a, double b, int N){
    // integral of sin(x) from a to b
    // using the remannt rectangle method
    //return ans -> double
    double x, dx, ans;
    ans = 0.0;
    x = a;
    dx = (b - a) / N;

    for(int i = 0; i < N; i++){
        ans += sin(x);
        x += dx;
    }
    ans *= dx;

    return ans;
}

