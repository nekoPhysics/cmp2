#include <stdio.h>

void swp(double *a, double *b){
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    double x, y;
    x = 10.0;
    y = 20.0;

    printf("x=%4.1f, y=%4.1f\n", x, y);

    swp(&x, &y);
    printf("x=%4.1f, y=%4.1f\n", x, y);

    return 0;
}