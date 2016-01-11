#include<stdio.h>
int main(){
    int i, n;
    int flag = 0;
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){
        if(n%i==0) flag=1;
    }
    if(flag==1) printf("not prime");
    else printf("prime");
    return 0;
}
