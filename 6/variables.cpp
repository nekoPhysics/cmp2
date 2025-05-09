#include<stdio.h>
/*c++ filename.cpp 
./a.out */


//def global g
int g;


void func(void){
    //local
    int b;
    //init
    b =99;
    //print
    printf("func b = %d, g = %d\n", b, g);
}


int main(void){
    //def local
    int a;
    //init
    a = 10;
    g = 20;
    //print
    printf("main a = %d, g = %d\n", a, g);
    func();

    return 0;
}