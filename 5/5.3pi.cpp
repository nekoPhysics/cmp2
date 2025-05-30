#include<stdio.h>
#include<math.h>


int main(void){
    //def
    double n, X, Y;
    int A = 100000000;
    double N= 0;
    
    //calc
    for(n = 1; n <=A; n++){
        Y = 1.0/pow(n, 2);
        N += Y;
    }
    printf("N = %f\n", N);
    printf("pi^(2)/6 =%f\n", pow(M_PI, 2)/6.0);
}
