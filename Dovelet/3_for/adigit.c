#include<stdio.h>
int main(){
    int d1=0,d2=0,d3=0;
    int i;
    for(i=1;i<=7;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>=100) d3 += temp;
        else if(temp>=10) d2 +=temp;
        else d1 += temp;
    }
    printf("%d %d %d",d1,d2,d3);
    return 0;
}
