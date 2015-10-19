#include<stdio.h>
int main(){
    int x,m;
    int i;
    int flag=0;
    scanf("%d%d",&x,&m);
    for(i=1;i<=m;i++){
        if(x*i%m==1){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0) printf("No such integer exists.");
    return 0;
}
