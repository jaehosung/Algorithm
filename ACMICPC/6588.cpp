#include<iostream>
#include<cstdio>
using namespace std;

const int MAXVALUE = 1000000;
bool notprime[MAXVALUE+1];// initialzing false

int main(){
    int ans;
    notprime[0]=true;
    notprime[1]=true;
    for(int i = 2; i*i <= MAXVALUE; i++){
        if(notprime[i] == false){
            notprime[i] = false;
            for(int j = i*2; j <= MAXVALUE; j +=i){
                notprime[j] = true;
            }
        }
    }

    scanf("%d",&ans);
    while(ans!=0){
        for(int i = 2; i*2 <=ans; i++){
            if(notprime[i] == false && notprime[ans-i] ==false){
                printf("%d = %d + %d\n",ans,i,ans-i);
                break;
            }
        }
        scanf("%d",&ans);
    }
    return 0;
}
