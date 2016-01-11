#include<stdio.h>
int main(){
    int a,b,c;
    int max=0;
    scanf("%d%d%d",&a,&b,&c);
    if(b-a>c-b) max=b-a-1;
    else max=c-b-1;
    printf("%d",max);
    return 0;
}
