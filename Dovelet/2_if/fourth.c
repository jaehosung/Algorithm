#include<stdio.h>
int main(){
    int x[3],y[3];
    int i;
    int x1=-1,x2=-1,y1=-1,y2=-1;
    int totalX=0,totalY=0;
    for(i=0;i<3;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
        if(i==0){
            x1 = x[i];
            y1 = y[i];
        }
        if(x1!=x[i]) x2=x[i];
        if(y1!=y[i]) y2=y[i];
        totalX+=x[i];
        totalY+=y[i];
    }

    printf("%d %d",(x1+x2)*2-totalX,(y1+y2)*2-totalY);

    return 0;
}
