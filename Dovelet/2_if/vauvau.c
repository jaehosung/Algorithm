#include<stdio.h>
int main(){
    int a1,a2,b1,b2;
    int i;
    int ppl[3];
    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
    for(i=0;i<3;i++){
        scanf("%d",&ppl[i]);
    }
    for(i=0;i<3;i++){
        if(a1>=(ppl[i]%(a1+a2))&&b1>=ppl[i]%(b1+b2)) printf("both\n");
        else if(a1>=ppl[i]%(a1+a2)||b1>=ppl[i]%(b1+b2)) printf("one\n");
        else printf("none\n");
    }
    return 0;
}
