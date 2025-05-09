#include<stdio.h>

int main(void){
    //definition of variables
    int a;
    double b;
    //init
    a = 100;
    b = 12.34567;
    //output
    // note:
    // int>>%d, double>>%f, %e>>exponential form
    // %f>>b, %e>>b
    //\n>>create newline:
    printf("a = %d\n" , a);
    printf("b = %f%e\n", b , b);

    return 0;
}