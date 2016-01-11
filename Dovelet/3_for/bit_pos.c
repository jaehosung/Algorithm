#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    if(n%2==1) printf("%d ",0);
    for(i=1;pow(2,i)<=n;i++)
    {
        if((int)(n/pow(2,i))%2==1){
            printf("%d ",i);
        }
    }
    return 0;
}
