#include<stdio.h>
int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    if((int)a%5==0&&b-0.5>=a) printf("%.2f",b-a-0.5);
    else printf("%.2f",b);
    return 0;
}
