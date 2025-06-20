#include<stdio.h>

class VCTR{
    public:
        double x, y, z;
        void disp();
};

void VCTR::disp(){
    printf("x=%.2f, y=%2f, z=%.2f\n", x, y, z);
}

int main(void){
    VCTR v1, v2;

    v1.y=20.0; v1.z=30.0;
    v1.disp();

    v2=v1;
    v2.disp();

    return 0;
}