#include <stdio.h>

void vectorSum(const double A[3], const double B[3], double result[3]){
    for(int i = 0; i < 3; i++){
        result[i] = A[i] + B[i];
    }
}

double innerProduct(const double A[3], const double B[3]){
    return A[0]*B[0] + A[1]*B[1] + A[2]*B[2];
}

void outerProduct(const double A[3], const double B[3], double result[3]){
    result[0] = A[1]*B[2] - A[2]*B[1];
    result[1] = A[2]*B[0] - A[0]*B[2];
    result[2] = A[0]*B[1] - A[1]*B[0];
}

int main(void){
    //definition
    double A[3] = {2.5, 2.5, 0.5};
    double B[3] = {2.0, 4.0, 0.5};
    double sum[3];
    double dot;
    double outer[3];
    //calculation
    vectorSum(A, B, sum);
    dot = innerProduct(A, B);
    outerProduct(A, B, outer);
    
    // print
    printf("Summation of A and B \n(%f, %f, %f)\n", sum[0], sum[1], sum[2]);
    printf("Inner product of A and B = %f\n", dot);
    printf("CrossProduct of A and B \n(%f, %f, %f)\n", outer[0], outer[1], outer[2]);
    
    return 0;
}
