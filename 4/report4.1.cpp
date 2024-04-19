#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def
    double X;
    double h = 1.0/2.0, i = 1.0/3.0, j = 1.0/4.0, k = 1.0/5.0;
    //calc
    X = 1;
    X -= h;
    X += i;
    X -= j;
    X += k;
    //output
    printf("X = %f", X);

    return 0;
}
