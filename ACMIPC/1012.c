#include<stdio.h>

//search the only place where cabbage is, not just entire map
int farm[52][52] = {}; //using '0' cap the map of farm
int cur[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int m,n,k;

void dfs_search(int m, int n);

int main(){
    int testcase;
    int i,j,itr;
    scanf("%d",&testcase);
    for(itr = 0; itr < testcase; itr++){
        int cntWorm=0;

        //initializing again because of iteration
        for(i=0;i<52;i++){
            for(j=0;j<52;j++){
                farm[i][j]=0;
            }
        }

        scanf("%d%d%d",&m,&n,&k);

        for(i = 0; i < k; i++)
        {
            int locM,locN;
            scanf("%d%d",&locM,&locN);
            farm[locM+1][locN+1] = 1;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(farm[j][i]==1){
                    cntWorm++;
                    dfs_search(j,i);
                }
            }
        }
        printf("%d\n",cntWorm);
    }
    return 0;
}

void dfs_search(int _m,int _n){
    int i;
    if(farm[_m][_n]==1){
        farm[_m][_n]=0;
        for(i = 0; i < 4; i++){
                dfs_search(_m+cur[i][0],_n+cur[i][1]);
        }
    }
}
