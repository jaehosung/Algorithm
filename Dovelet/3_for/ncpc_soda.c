#include<stdio.h>
int main(){
    int e,f,c;
    int soda=0;
    int bottle=0;
    scanf("%d%d%d",&e,&f,&c);
    bottle = e+f;
    while(bottle>=c){
        bottle -=c;
        bottle++;
        soda++;
    }
    printf("%d",soda);

    return 0;
}
