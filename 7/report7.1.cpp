# include <stdio.h>

void swp(double &a, double &b){
    // swap the values of a and b
    double tmp = a;
    a = b;
    b = tmp;
}

int main(void){
    double x, y;
    x = 10.0;
    y = 20.0;
    // 4.1fは小数点以下1桁まで表示の意味
    printf("x = %4.1f, y = %4.1f\n", x, y);
    
    swp(x, y);
    printf("x = %4.1f, y = %4.1f\n", x, y);

    return 0;
}