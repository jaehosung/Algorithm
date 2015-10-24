#include<stdio.h>
int main(){
    int n,total=0,total2=0;
    int i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        total += i;
    }
    for(i=n+1;i<=2*n;i++){
        total2 += i;
        if(total2==total){
            printf("O"); break;
        }else if(total2>total){
            printf("X"); break;
        }
    }
    return 0;
}
