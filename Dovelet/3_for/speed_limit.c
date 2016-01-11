#include<stdio.h>
int main(){
    int testcase,total=0,time=0;
    int i;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++){
        int vel,_time;
        scanf("%d%d",&vel,&_time);
        total += vel*(_time-time);
        time = _time;
    }
    printf("%d miles",total);
}
