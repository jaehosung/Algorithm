#include<stdio.h>
int main(){
    int a,b,c,d;
    float answer;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==c&&b==d){
        printf("many");
    }else if(a==c&&b!=d)
    {
        printf("none");
    }else{
        answer = (float)(d-b)/(a-c);
        printf("%.3f",answer);
    }
    return 0;
}
