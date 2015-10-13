#include<stdio.h>
int main(){
    int i;
    int max=0, min=100;
    for(i=0;i<7;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>max) max = temp;
        if (temp < min) min = temp;
    }
    printf("%d %d",max,min);
    return 0;
}
