#include<stdio.h>
int main(){
    int i,n,num;
    int min=-1,max = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>max)
            max = num;
        if(min>num||min==-1)
            min = num;
    }
    printf("%d %d\n",min,max);
    return 0;
}
