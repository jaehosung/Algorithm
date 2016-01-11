#include<stdio.h>
int main(){
    int price, exp;
    int i;
    int value=1;
    scanf("%d%d",&price,&exp);
    for(i=0; i<exp; i++){
        value*=10;
    }
    printf("%d\n",((price+value/2)/value)*value);
}
