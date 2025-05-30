#include<stdio.h>


int main(void){
    //def
    double X = 0;
    double Y = 0;
    int n;
    int N = 5.0;

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