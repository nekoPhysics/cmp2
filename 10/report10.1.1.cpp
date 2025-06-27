#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

double Lorentz(double x);

int main(void){
    double x =- 10.0, dx = 0.01;
    //open a file
    FILE *fout;
    fout = fopen("Lorentz.csv", "w");
    if(fout == NULL)return 1;
    //writing
    fprintf(fout, "x, Lorentz(x)\n");
    while(x <= 10.0){
        fprintf(fout, "%f, %f\n", x, Lorentz(x));
        x += dx;
    }

    return 0;
}

double Lorentz(double x){
    return 2 / (PI * ((x*x) + 4));
}
