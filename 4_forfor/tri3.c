#include<stdio.h>
int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            if(j<=i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
