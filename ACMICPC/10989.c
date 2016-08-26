#include<stdio.h>
int a[10001]= {0,};
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        a[temp]++;
    }
    for(i=0;i<10001;i++){
        while(a[i]>0){
            printf("%d\n",i);
            a[i]--;
        }
    }

    return 0;
}
