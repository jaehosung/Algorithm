#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a!=0&&b%a==0) printf("%d | %d",a,b);
    else printf("%d !| %d",a,b);
    return 0;
}
