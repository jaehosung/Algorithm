#include<stdio.h>
int main(){
    int arr[4];
    int i,j;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[0]*arr[2]);
}
