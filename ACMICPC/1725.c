#include<stdio.h>

int arr[100001];

int main(){
    int len, maxValue=0;
    int i;

    scanf("%d",&len);

    //input
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    //operation
    for(i=0;i<len;i++){
        int itr,count=0;

        itr = i+1;
        while(itr<len&&arr[itr]>=arr[i]){
                count++;
                itr ++;
        }

        itr = i-1;
        while(itr>0&&arr[itr]>=arr[i]){
                count++;
                itr --;
        }

        if((count+1)*arr[i]>maxValue)
            maxValue = (count+1)*arr[i];
    }

    printf("%d",maxValue);
    return 0;
}
