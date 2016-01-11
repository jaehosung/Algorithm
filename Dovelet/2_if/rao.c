#include<stdio.h>
int main(){
    int i,j;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp;
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    if(a*a+b*b==c*c) printf("right");
    else if (a*a+b*b>c*c) printf("acute");
    else printf("obtuse");


    return 0;
}
