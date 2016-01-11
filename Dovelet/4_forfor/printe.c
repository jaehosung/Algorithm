#include<stdio.h>
void hline(int val);
void vline(int val);
int main(){
    int val,i,j;
    scanf("%d",&val);
    hline(val);
    vline(val);
    hline(val);
    vline(val);
    hline(val);
    return 0;
}
void hline(int val){
    int i;
    for(i=0;i<val;i++){
        printf("*");
    }
    printf("\n");
}
void vline(int val){
    int i;
    for(i=0;i<(val-3)/2;i++){
        printf("*\n");
    }
}
