#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j>0;j--){
            printf(" ");
        }
        for(j=n-i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
