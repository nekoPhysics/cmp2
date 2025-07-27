#include<stdio.h>
#include <math.h>
#include <vector>

double x = 0;
double y = 0;
double g = 9.8;
double b = 2.0;
double m = 1.0;
double v = 0.0;
double v0 = 20.0;
double theta = 45.0;

void init(std::vector<double> &r, std::vector<double> &v, double v0, double theta){
    //init
    r[0] = 0.0;
    r[1] = 0.0;
    v[0] = v0 * cos(theta);
    v[1] = v0 * sin(theta);
}

double calc_xn(double x_n, double vx_n, double dt) {
    return x_n + dt * vx_n;
}

double calc_yn(double y_n, double vy_n, double dt) {
    return y_n + dt * vy_n;
}

double calc_vxn(double vx_n, double b, double m, double dt) {
    return vx_n + dt * ( - (b/m) * vx_n );
}

double calc_vyn(double vy_n, double b, double m, double g, double dt) {
    return vy_n + dt * ( -g - (b/m) * vy_n );
}

int main(void){
    //init
    const double v0    = 20.0;
    const double theta = 45.0 * M_PI / 180.0;
    const double m     = 1.0;
    const double b     = 2.0;
    const double g     = 9.8;
    const double dt    = 0.05;
    double t = 0.0;
    std::vector<double> r(2), v(2);
    init(r, v, v0, theta);
    FILE *fp = fopen("Euler4.csv", "w");
    if(fp==NULL)return 1;
    fprintf(fp, "t,x(t),y(t)\n");
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