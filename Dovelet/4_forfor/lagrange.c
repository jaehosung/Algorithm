#include<stdio.h>
int main(){
    int n;
    int i,j,k,l;
    int count=0;
    scanf("%d",&n);
    for(i=0;i*i<=n;i++){
        for(j=i;j*j<=n;j++){
            for(k=j;k*k<=n;k++){
                for(l=k;l*l<=n;l++){
                    if((i*i+j*j+k*k+l*l)==n) count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
