#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def and init
    int i = 0, j = 1;

    //if
    if(i>j){
        printf("i = %d> j = %d\n", i, j);
    }

    i++;
    if(i==j){
        printf("i = %d == j = %d\n", i, j);
    }

    return 0;
}