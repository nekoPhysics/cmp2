#include<stdio.h>
#include <math.h>

double g = 9.8;

double calc_A(double vn){
    //init
    double m = 0.5;
    double A = 0.0;
    double b = 0.25;
    double g = 9.8;
    //calculate
    A = (g - (b / m)*vn);
    return A;
}

int main(void){
    //file pointer 
    FILE *fp;
    //init
    double t = 0.0;
    double dt = 0.25;
    double v = 0.0;
    // open csv file
    fp = fopen("Euler2.csv", "w");
    if(fp==NULL)return 1;
    fprintf(fp, "t, v, v(t) \n");
    //Euler method
    while(t <= 10.00001){
        fprintf(fp, "%f, %f, %f \n", t, v, g*t);
        v += dt * calc_A(v);
        t += dt;
    }
    //file close
    fclose(fp);

    return 0;

}