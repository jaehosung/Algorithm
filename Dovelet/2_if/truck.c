#include<stdio.h>
int main(){
    int l1,l2,l3;
    scanf("%d%d%d",&l1,&l2,&l3);
    if(l1<168) printf("CRASH %d",l1);
    else if(l2<168) printf("CRASH %d",l2);
    else if(l3<168) printf("CRASH %d",l3);
    else printf("NO CRASH");
    return 0;
}
