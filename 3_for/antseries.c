#include<stdio.h>
int main(){
    int count=1;
    int prev;
    scanf("%d",&prev);

    while(1){
        int temp;
        scanf("%d",&temp);
        if(temp!=0){
            if(temp==prev) count++;
            else{
                printf("%d %d ",count,prev);
                count=1;
            }
        }else{
            printf("%d %d ",count,prev);
            break;
        }
        prev=temp;
    }
            return 0;

}
