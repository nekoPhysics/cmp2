# include <stdio.h>

int main(void){
    //definition
    int dt;
    int &rf = dt;

    dt = 100;
    printf("dt = %d, rf = %d\n", dt, rf);
    rf = 200;
    printf("dt = %d, rf = %d\n", dt, rf);

    return 0;
}
