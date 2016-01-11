#include<stdio.h>
int main(){
    int a[3];
    int i,j;
    for(i=0;i<3;i++) scanf("%d",&a[i]);
    //Sorting
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(a[i]>a[j]){
                int temp;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    if(a[1]-a[0]==a[2]-a[1]){
        int output;
        output = a[2]+a[2]-a[1];
        if(output<100) printf("%d",output);
        else printf("%d",a[0]*2-a[1]);
    }else{
        int diff1, diff2;
        diff1 = a[1]-a[0];
        diff2 = a[2]-a[1];
        if(diff2>diff1){
            printf("%d",a[1]+a[1]-a[0]);
        }else{
            printf("%d",a[0]+a[2]-a[1]);
        }
    }
    return 0;
}
