#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def
    int i, sum, mul;
    //init
    sum = 0; mul = 1;
    //calc
    for(i = 1; i <= 5; i++){
        sum += i;
        mul *= i;
        // if(i == 3)
        //     break;
    }
    printf("sum = %d, mul = %d\n", sum, mul);

    return 0;
}