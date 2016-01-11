#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d ",a,b);
    while(1){
        int temp;
        if(a-b>=0) printf("%d ",a-b);
        else break;

        temp = a;
        a=b;
        b=temp-b;
    }
    return 0;
}
