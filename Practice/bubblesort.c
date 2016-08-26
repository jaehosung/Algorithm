#include<stdio.h>
int a[1000000];
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(j=0;j<n;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
