#include<stdio.h>
/*c++ filename.cpp 
./a.out */

int main(void){
    //def init
    double d[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int i = 0, j = 3;

    //check op
    d[0] = d[0] +2.0;
    d[1] += 2.0;    //d[1] = d[1]+2.0
    d[2] -= 2.0;    //d[2] = d[2]-2.0
    d[3] *= 2.0;    //d[3] = d[3]*2.0
    d[4] /= 2.0;    //d[4] = d[4]/2.0

    printf("d[%d] = %3.1f\n", i, d[i]);    //%3.1f..1, %3.3f..1.11 d[0]
        i++;
    printf("d[%d] = %3.1f\n", i, d[i]);    //d[1]
        ++i;
    printf("d[%d] = %3.1f\n", i, d[i]);    //d[2]
        i+=1;
    printf("d[%d] = %3.1f\n", i, d[i]);    //d[3]
        i=i+1;
    printf("d[%d] = %3.1f\n\n", i, d[i]);    //d[4]

    //Increment and decrement op
    printf("i = %d, j = %d\n", i, j);
        i = --j;
    printf("i = --j::i = %d,j = %d\n", i, j);
        i = ++j;
    printf("i = ++j::i = %d, j = %d\n", i, j);
        i = j--;
    printf("i = j--:: i = %d, j = %d\n", i, j);

    return 0;
}
