#include <stdio.h>
int main(){
    int y1,y2,o1,o2;
    int times;
    scanf("%d%d%d%d",&y1,&o1,&y2,&o2); 
    times = (o1-o2)/(y1-y2);
    printf("%d %d\n",times,o1-y1*times);
}
