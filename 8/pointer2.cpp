#include<stdio.h>

int main(void){
    int *pt;
    int mydt=1234, idt;

    pt=&mydt;
    idt=*pt;
    printf("mydt = %d\n", mydt);
    printf("*pt = %d\n", *pt);
    printf("idt = %d\n", idt);

    mydt=555;
    printf("mydt = %d\n", mydt);
    printf("*pt = %d\n", *pt);
    printf("idt = %d\n\n", idt);

    *pt=666;
    printf("mydt = %d\n", mydt);
    printf("*pt = %d\n", *pt);
    printf("idt = %d\n", idt);

    return 0;
}