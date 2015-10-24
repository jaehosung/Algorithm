#include<stdio.h>
int main(){
    int i;
    int max=0,maxNum;
    for(i=1;i<=7;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>max){
            max=temp;
            maxNum=i;
        }
    }
    printf("%d",maxNum);
    return 0;
}
