#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def init
    int i = 10, j=4;
    double ans, d = 4.0;

    //check op
    printf("i = %d, j = %d, d = %f\n\n", i, j, d);
    ans = i/j;  
        printf("ans = i/j  ==> ans = %f\n", ans);
    ans = i/d;
        printf("ans = i/d  ==> ans = %f\n\n", ans);
    
    //check op2
    ans = 10/4;
        printf("ans = 10/4  ==> ans = %f\n", ans);
    ans = 10.0/4;
        printf("ans = 10.0/4  ==> ans = %f\n", ans);
    ans = 10/4.0;
        printf("ans = 10/4.0  ==> ans = %f\n", ans);
    ans = 10.0/4.0;
        printf("ans = 10.0/4.0  ==> ans = %f\n\n", ans);
    
    //check op %
    ans = 10%4;
        printf("ans = 10%%4    ==> ans = %f\n\n", ans);
    
    return 0;
}