#include<stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for (i=2;i<=n;i++){
        while(n%i==0){
            printf("%d ",i);
            n /= i;
        }
    }
    return 0;
}
