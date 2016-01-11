#include<stdio.h>
int main(){
    int arr[7];
    int i;
    int max=0;
    for(i=0;i<7;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>max) max = temp;
    }
    printf("%d",max);
    return 0;
}

