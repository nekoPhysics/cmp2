#include<stdio.h>
/*c++ filename.cpp 
./a.out */


int main(void){
    //def
    int i, sum, mul;
    //init
    i = 1; sum = 0; mul = 1;
    //calc
    while(i <= 5){
        // if(i == 3)break;
        sum += i;
        mul *= i;
        i++;
    }
    printf("sum =%d, mul = %d\n", sum, mul);

    return 0;
}