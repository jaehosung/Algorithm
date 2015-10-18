#include<stdio.h>
int main(){
    int a[3];
    int i,j;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(a[i]<a[j]){
                int temp;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    if(a[0]<a[2]+a[1]) printf("yes");
    else printf("no");

    return 0;
}
