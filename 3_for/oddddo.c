#include<stdio.h>
int main(){
    int n;
    int i;
    int a[1000];
    int total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=2*i+1;
    }
    for(i=0;i<n;i++){
        total+=a[i]*a[n-i-1];
    }
    printf("%d",total);

    return 0;
}
