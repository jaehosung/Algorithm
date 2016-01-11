#include<stdio.h>
int main(){
    int val, num;
    int i,count = 0;
    scanf("%d%d",&val,&num);
    for(i=1;i<=val;i++){
        if(val%i==0){
            count++;
            if(count == num){
                printf("%d",i);
                break;
            }
        }
    }
    if(count != num) printf("0");
    return 0;
}
