#include<stdio.h>
int main(){
    int arr[4];
    int i;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    if(arr[1]-arr[0]==arr[2]-arr[1]){
        printf("%d",arr[3]+arr[3]-arr[2]);
    }else{
        printf("%d",arr[3]*arr[3]/arr[2]);
    }
    return 0;
}
