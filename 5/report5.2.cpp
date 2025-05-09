#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def
    double X, Y;
    int n, N;
    X = 0;
    n = 1.0;
    N = 5;
    //for
    for(n = 1; n <= N; n++){
        if((n & 1) == 0){
            Y = double(1.0/n);
            X -= double(Y);
        }else{
            Y = double(1.0/n);
            X += double(Y);
        }

    }
    printf("X = %f\n", X);

    return 0;
}