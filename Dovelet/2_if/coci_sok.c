#include<stdio.h>
int main(){
    float volume[3];
    float ratio[3];
    int i;
    float min=0;
    for(i=0;i<3;i++){
        scanf("%f",&volume[i]);
    }
    for(i=0;i<3;i++){
        scanf("%f",&ratio[i]);
        if(i==0||min>volume[i]/ratio[i]){
            min = volume[i]/ratio[i];
        }
    } 
    for(i=0;i<3;i++){
        printf("%.6f ",volume[i]-min*ratio[i]);
    }
    return 0;
}
