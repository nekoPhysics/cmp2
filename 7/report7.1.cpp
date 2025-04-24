// 第7回課題 値を入れ替えるプログラム
# include <stdio.h>

void swp(double &a, double &b){
    // tmp=aとしてaをtmpに退避.
    // a=bとしてbをaに代入.
    // b=tmpとしてtmpをbに代入.
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