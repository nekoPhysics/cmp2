#include<stdio.h>


double ave(double x, double y){
    double wk;
    wk = (x + y) / 2.0;
    return wk;
}


int main(void){
    //def
    double a, b, c;
    //init
    a = 11.11;
    b = 33.33;
    //call ave
    c = ave(a, b);
    //print
    printf("a = %f, b = %f, average = %f\n", a, b, c);

    return 0;
}