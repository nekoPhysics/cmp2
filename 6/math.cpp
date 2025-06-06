#include<stdio.h>
#include<math.h>


int main(void){
    //sin(x), cos(x)
    double x, r;
    printf("x, sin(x), cos(x\n)");

    for(x = 0.0; x<=90.0; x += 15.0){
        r = x * 3.14159 / 180.0;
        printf("%5.2f % 5.2f % 5.2f\n", x, sin(r), cos(r));
        if(x == 90.0)printf("\n");
    }

    //log10, pow, sqrt
    double d;
    d = log10(1000.0);
    printf("log10(1000.0): %5.2f\n", d);

    d = pow(2.0, 8.0);
    printf("pow(2.0, 8.0): %5.2\n", d);

    d = sqrt(10.0);
    printf("sqrt(10.0): %5.2f\n", d);

    return 0;
}