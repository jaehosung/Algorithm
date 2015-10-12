#include<stdio.h>
int main(){
    float wide[3]={4.5,150,200},line[3]={6.0,300,500},quater[3]={5.0,200,300};
    float state[3];
    float pos=0;
    scanf("%f%f%f",&state[0],&state[1],&state[2]);
    if(state[0]<=wide[0]&&state[1]>=wide[1]&&state[2]>=wide[2]){ printf("Wide Receiver "); pos=1;}
    if(state[0]<=line[0]&&state[1]>=line[1]&&state[2]>=line[2]){ printf("Lineman "); pos=1;}
    if(state[0]<=quater[0]&&state[1]>=quater[1]&&state[2]>=quater[2]){ printf("Quarterback "); pos=1;}

    if(pos==0) printf("No positions");
    return 0;
}
