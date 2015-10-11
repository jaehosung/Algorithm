#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("The number of whole tiles is %d part tiles is %d",(int)(floor(x/8)*floor(y/8)),(int)(ceil((float)(x%8)/8)*floor(y/8)+ceil((float)(y%8)/8)*floor(x/8)+ceil((float)(x%8)/8)*ceil((float)(y%8)/8)));
    return 0;
}
