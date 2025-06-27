#include<stdio.h>

int main(void){
    double d = 100.0;
    FILE *fp;


//open a file
fp=fopen("file.txt", "w");
if(fp==NULL)return 1;

//write to the file
fprintf(fp, "This is a test \n");
fprintf(fp, "d = %f\n", d);

//close the file
fclose(fp);

return 0;
}