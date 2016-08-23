#include<stdio.h>
int ans;
void bfs(int n){
    if( n==0){
        ans++;
        return;
    }
    if(n>=3){
        bfs(n-3);
    }
    if(n>=2){
        bfs(n-2);
    }
    if(n>=1){
        bfs(n-1);
    }


};
int main(){
    int testcase;
    int i;
    scanf("%d",&testcase);
    while(testcase--){
        int num;
        ans=0;
        scanf("%d",&num);
        bfs(num);
        printf("%d\n",ans);

    }
    return 0;
}
