#include<stdio.h>
/*c++ filename.cpp 
./a.out */


int main(void){
    //def init
    int a = 10, b = 20, c;
    //if
    if(a == 10)printf("a = = 10\n");
    //if, else
    if(a == b){
        printf("a == b\n");
    }
    else{
        printf("a != b \n");
    }
    //if,else if, else
    if(b > 100) c = 1;
    else if(b > 50)c = 2;
    else if(b > 10)c = 3;
    else           c = 9;

    printf("b = %d, c = %d\n", b, c);
    return 0;
}