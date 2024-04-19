#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def vector A,B
    double A[] = {2.5, 2.5, 0.5};
    double B[] = {2.0, 4.0, 0.5};

    //def and calcans SUM,INNERPRODUCT
    double sum[3] = {A[0]+B[0], A[1]+B[1], A[2]+B[2]};
    double innerproduct = A[0]*B[0] + A[1]*B[1] + A[2]*B[2];

    //print
    printf("Summation of A and B = (%f, %f, %f)\n", sum[0], sum[1], sum[2]);
    printf("InnerProduct of A and B = %f\n", innerproduct);

    return 0; 
}
