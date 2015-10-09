#include<stdio.h>
#include<math.h>

int main(){
    float n,r;
    scanf("%f%f",&r,&n);
    printf("%.3f",sin(M_PI/n)*cos(M_PI/n)*r*r*n);
    return 0;
}
