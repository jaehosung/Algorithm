#include<stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("1..%d %d\n",i,(i+1)*i/2);
    }
    return 0;
}
