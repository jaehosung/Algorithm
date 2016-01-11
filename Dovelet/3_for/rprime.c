#include<stdio.h>
int main(){
    int n,m;
    int i;
    int flag=0;
    scanf("%d%d",&n,&m);
    for(i=2;i<n||i<m;i++){
        if(n%i==0&&m%i==0) flag=1;
    }
    if(flag==1) printf("no");
    else printf("yes");
    return 0;
}
