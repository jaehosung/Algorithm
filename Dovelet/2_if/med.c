#include<stdio.h>
int main(){
    int a[3];
    int i;
    int j;

    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<2;i++)
    {
        for(j=i;j<3;j++){
            if(a[i]>a[j]){
                int temp;
                temp =a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
        printf("%d",a[1]);
    return 0;
}
