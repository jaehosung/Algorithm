#include<stdio.h>
int main(){
    int r,e,c;
    scanf("%d%d%d",&r,&e,&c);
    if(e-c==r) printf("does not matter");
    else if(e-c>r) printf("advertise");
    else printf("do not advertise");
    return 0;
}
