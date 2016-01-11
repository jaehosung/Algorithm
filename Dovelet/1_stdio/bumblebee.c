#include<stdio.h>
int main(){
    int a,b,x,l;
    scanf("%d%d%d%d",&a,&b,&x,&l);
    printf("%.6f\n",(float)l*x/(a+b));
    return 0;
}
