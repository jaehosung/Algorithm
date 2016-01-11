#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            for(k=1;k<10;k++){
                if((i*101+j*10+k*111)==(1000+100*i+10*j+2)) printf("%d\n",100*i+10*j+k);
            }
        }
    }
    return 0;
}
