#include <stdio.h>
#include <math.h>

int main(void){
    //file pointer
    FILE *fp;
    //init
    double x = 2.0;
    double tau = 0.5;
    double t = 0.0;
    double dt = 0.1;
    // open csv file
    fp = fopen("Euler1.csv", "w");
    if(fp==NULL)return 1;

    fprintf(fp, "t, x(t), analytic result \n");

    //Euler method
    while(t <= 2.00001){
        fprintf(fp, "%f, %f, %f \n", t, x, 2.0*exp(-t/tau));
        t += dt;
        x += -x/tau*dt;
    }
    //file close
    fclose(fp);

    return 0;

}