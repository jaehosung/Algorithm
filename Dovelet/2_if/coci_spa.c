#include<stdio.h>
int main(){
    int hr,min;
    int total;
    scanf("%d%d",&hr,&min);
    total = hr*60 + min - 45;
    printf("%d %d",(total/60)%24,total%60);
    return 0;
}
