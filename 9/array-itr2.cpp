#include<iostream>
using namespace std;

int main(void){
    int dt[3]={10, 11, 12};
    int *p, *p_end = dt + 3;

    for(p=dt;p<p_end;p++){
        cout << *p << "";
    }
    cout<<"\n";

    return 0;
}