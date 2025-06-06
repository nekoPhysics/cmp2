#include<stdio.h>


void message(void){
    printf("関数の動作プログラム\n");
}

double area(double r){
    return r*r*3.14159;
}

void disp(double r, double d){
    printf("radius = %f\n", r);
    printf("area = %f\n", d);
}

int main(void){
    //def
    double r, s;
    //init
    r = 5.0;
    //Calc
    s = area(r);
    //print
    message();
    disp(r, s);

    return 0;
}