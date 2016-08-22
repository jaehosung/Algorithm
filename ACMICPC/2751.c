#include<stdio.h>
int main(){
    int E,S,M;
    int e=1,s=1,m=1;
    int yrs=1;

    scanf("%d%d%d",&E,&S,&M);

    while(E!=e||S!=s||M!=m){

        e = e%15+1;
        s = s%28+1;
        m = m%19+1;

        yrs++;
    }

    printf("%d\n",yrs);
}
