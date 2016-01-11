#include<stdio.h>
int main(){
    int n,k,t,f;
    scanf("%d%d%d%d",&n,&k,&t,&f);
    printf("%d",f+(f-n)/(k-1));
    return 0;
}
