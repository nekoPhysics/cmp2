#include<stdio.h>

int main(void){
    //definition
    int mydt=55;
    int *pt;
    pt=&mydt;
    //output
    printf("mydt = %d\n", mydt);
    printf("&mydt = %p\n", &mydt);
    printf("pt = %p\n", pt);
    printf("*pt = %d\n", *pt);

    return 0;
}