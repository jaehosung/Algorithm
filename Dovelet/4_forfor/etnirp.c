#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++) printf("*");
    printf("\n");
    for(j=1;2*j+3<=n;j++){
        for(i=1;i<n;i++) printf(" ");
        printf("*\n");
    }
    for(i=1;i<=n;i++) printf("*");
    printf("\n");
    for(j=1;2*j+3<=n;j++){
        for(i=1;i<n;i++) printf(" ");
        printf("*\n");
    }
    for(i=1;i<=n;i++) printf("*");
    return 0;
}
