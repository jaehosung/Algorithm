#include<stdio.h>
int main(){
    int i,min=100,max=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>max) max = temp;
        if(min>temp) min = temp;
    }
    printf("%d",2*(max-min));
    return 0;
}
