#include<stdio.h>
#include <math.h>

double b = 2.0;
double k =100.0;
double x = 1.0;
double m = 1.0;
double v = 0.0;

double calc_vn(double xn_1, double vn_1, double dt){
    //init
    double vn = 0.0;
    //calculate
    vn = dt * (((-b / m) * vn_1 ) + ((-k / m) * xn_1)) + vn_1;
    return vn;
}

double calc_xn(double xn_1, double vn_1, double dt){
    //init
    double xn = 0.0;
    //calculate
    xn = dt * vn_1 + xn_1;
    return xn;
}

int main(void){
    //file pointer 
    FILE *fp;
    //init
    double t = 0.0;
    double dt = 0.001;
    double vn = 0.0;
    double xn = 0.0;

    // open csv file
    fp = fopen("Euler3.csv", "w");
    if(fp==NULL)return 1;
    fprintf(fp, "t, x(t), v(t) \n");
    //Euler method
    while(t <= 5.00001){
        fprintf(fp, "%f, %f, %f \n", t, x, v);
        vn = calc_vn(x, v, dt);
        xn = calc_xn(x, v, dt);
        x = xn;
        v = vn;
        t += dt;
    }
    //file close
    fclose(fp);

    return 0;

}