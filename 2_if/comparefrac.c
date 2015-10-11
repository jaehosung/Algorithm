#include<stdio.h>
int main(){
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(a/b==c/d) printf("0");
    else if(a/b>c/d) printf("1");
    else printf("-1");
    return 0;
}
