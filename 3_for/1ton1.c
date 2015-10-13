#include<stdio.h>
int main(){
    int n;
    int i;
    int total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        total+=i;
        if(i==n) printf("%d",i);
        else printf("%d+",i);
    }
    printf("=%d",total);
    return 0;
}
