#include<stdio.h>
int main(){
    int val;
    int i,j;
    scanf("%d",&val);
    val = (val+1)/2;
    for(i=0;i<val;i++){
        for(j=0;j<val-i-1;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
