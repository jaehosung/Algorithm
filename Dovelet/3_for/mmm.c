#include<stdio.h>
int main(){
    int i;
    int total=0,min=1001,max=0;
    for(i=1;i<=10;i++){
        int temp;
        scanf("%d",&temp);
        total += temp;
        if(max<temp) max = temp;
        if(min>temp) min = temp;
    }
    printf("%d %d %d",total,max,min);
    return 0;
}
