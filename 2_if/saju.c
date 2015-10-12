#include<stdio.h>
int main(){
    int y,d,m;
    scanf("%d%d%d",&y,&d,&m);
    ((y+d+m)%10==0)? printf("운수대통!"): printf("노력하세요!");
    return 0;
}
