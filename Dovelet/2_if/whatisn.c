#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=5){
        printf("%d",n/2+1);
    }else{
        printf("%d",5-(n-1)/2);
    }
}
