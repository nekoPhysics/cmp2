#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

int main(void){
    //file pointer
    FILE *fout;

    double x = 0.0, dx = PI / 100.0;

    //open a file
    fout = fopen("sin.csv", "w");
    if(fout == NULL)return 1;

    //writting
    fprintf(fout, "x, sin(x)\n");
    while(x <= 2.0 *PI){
        fprintf(fout, "%f, %f\n", x, sin(x));
        x += dx;
    }
    fclose(fout);

    return 0;
}