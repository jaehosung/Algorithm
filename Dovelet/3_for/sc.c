#include<stdio.h>
int main(){
    int i;
    int n=0;
    int grade[7]={0,};
    while(1){
        int temp;
        scanf("%d",&temp);
        if(temp==-1){
            break;
        }
        grade[0]++;
        temp = temp/10;
        switch(temp){
            case 10 :
            case 9 :
                grade[1]++;
                break;
            case 8 :
                grade[2]++;
                break;
            case 7 :
                grade[3]++;
                break;
            case 6 :
                grade[4]++;
                break;
            default : 
                grade[5]++;
                break;
        }
    }
    for(i=0;i<6;i++){
        printf("%d\n",grade[i]);
    }
    return 0;
}
