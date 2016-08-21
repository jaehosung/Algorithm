#include<stdio.h>
int main(){
    int i,j,n;

    scanf("%d",&n);

    for(j=0;j<n-1;j++){
        printf(" ");
    }

    if(n>1){
        printf("*");
        printf("\n");
    }

    for(i=1;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("* ");
        for(j=0;j<i-1;j++){
            printf("  ");
        }
        printf("*");
        printf("\n");
    }
    for(i=0;i<=(n-1)*2;i++){
        printf("*");
    }
    return 0;
}
