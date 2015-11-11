#include<stdio.h>
int main(){
    int hour;
    float answer;
    scanf("%d",&hour);
    if(hour==12) hour = 0;
    answer = (float)30*hour/(6-0.5);
    if(answer>=60) printf("CAN'T SEE!");
    else printf("%.6f",answer);
    return 0;
}
