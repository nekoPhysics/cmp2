#include <stdio.h>

void disp_ary(int *A){
    printf("A[0]=%d\n", A[0]);
    printf("A[4]=%d\n", A[4]);
}

int main(void){
    int dt[5] = {10, 20, 30, 40, 50};
    disp_ary(dt);

    return 0;
}