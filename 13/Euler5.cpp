#include<stdio.h>
#include <math.h>
#include <vector>

//use Si units

double Ex = -1.0e4;
double Ey = 0.0;
double Ez = 0.0;
double Bx = 0.0;
double By = 0.0;
double Bz = 0.0;
double v0 = 1.0e10;
double q = 1.0;
double dt = 0.001


void init(std::vector<double> &r, std::vector<double> &v, std::vector<double> &E, double v0){
    //init
    r[0] = 0.0;
    r[1] = 0.0;
    r[2] = 0.0;
    v[0] = 1.0e10;
    v[1] = 1.0e10;
    v[2] = 0.0;
    E[0] = -1.0e4;
    E[1] = 0.0;
    E[2] = 0.0;
}

double calc_a(){
    double a = 0.0;
    a = q/m * (E[1,2,3] + v[1,2,3] * B[1,2,3]);
    return 
}

double calc_vn(double vn, double a, double q, double r, double dt){
    double vn_1 = 0.0;
    return vn_1 = vn + a*dt
}

int main(void){
    //init
    const double dt = 0.05;
    double t = 0.0;
    std::vector<double> r(2), v(2);
    init(r, v, v0, theta);
    FILE *fp = fopen("Euler5.csv", "w");
    if(fp==NULL)return 1;
    fprintf(fp, "t*omg_c,x(t)/Rc,y(t)/Rc\n");
    while (r[1] >= 0.0) {
        fprintf(fp, "%f,%f,%f\n",
                     t, r[0], r[1]);
        double x_n  = calc_xn (r[0], v[0], dt);
        double y_n  = calc_yn (r[1], v[1], dt);
        double vx_n = calc_vxn(v[0], b, m, dt);
        double vy_n = calc_vyn(v[1], b, m, g, dt);

        r[0] = x_n;
        r[1] = y_n;
        v[0] = vx_n;
        v[1] = vy_n;

        t += dt;
    }

    fclose(fp);
    return 0;
}