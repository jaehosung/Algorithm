#include<stdio.h>
int main(){
    int m;
    int i;
    scanf("%d",&m);
    for(i=1;i*i<=m*2;i++){
        if(i*(i+1)==2*m) break;
    }
    printf("%d",i);
    return 0;
}
