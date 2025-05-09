#include<stdio.h>
/*c++ filename.cpp 
./a.out */
int main(void){
    //def
    int n;
    int dt[10];

    //init
    dt[0] = 10;
    dt[9] = 99;

    //init_with_subscript
    n = 5;

    dt[n] = 55;
    dt[2] = dt[9];

    printf("dt[0] = %d\n", dt[0]);
    printf("dt[2] = %d\n", dt[2]);
    printf("dt[%d] = %d\n", n, dt[n]);
    printf("dt[2] = %d\n", dt[9]);

    return 0;
}