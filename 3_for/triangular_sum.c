#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       sum += i*(((i+2)*(i+1))/2);
    }
    printf("%d",sum);
    return 0;
}
