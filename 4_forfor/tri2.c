#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=n-j+1;i++) printf("*");
        printf("\n");
    }
    return 0;
}
