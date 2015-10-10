#include<stdio.h>
#include<math.h>
int main(){
    int st,ed;
    int check=1;
    scanf("%d%d",&st,&ed);
    if(st==ed&&ed==pow((int)sqrt(ed),2)) check=0;
    printf("%d",(int)(ed-sqrt(ed))-(int)(st-sqrt(st))+check);
    return 0;
}
