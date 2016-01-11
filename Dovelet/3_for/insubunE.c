#include<stdio.h>
int main(){
    int i,a,b;
    int flag=0;
    scanf("%d%d",&a,&b);
    for(i=1;i*i<=b;i++){
        if(b%i==0&&a==(b/i)+i){
            printf("(x-%d)(x-%d)",i,b/i);
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("impossible");
    }
    return 0;
}
