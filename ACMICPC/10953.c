#include<stdio.h>
int main(){
    int a,b,t;
    char c;
    scanf("%d",&t);
    while(t--){
        scanf("%1d%1c%1d",&a,&c,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
