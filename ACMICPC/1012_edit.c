#include<stdio.h>
int m,n,k;
int map[50][50];

void del(int x, int y){
    map[x][y]=0;
    if(x>0  &&map[x-1][y]) del(x-1,y);
    if(y>0  &&map[x][y-1]) del(x,y-1);
    if(x<m-1&&map[x+1][y]) del(x+1,y);
    if(y<n-1&&map[x][y+1]) del(x,y+1);

}

int main(){
    int T,t;

    scanf("%d",&T);

    for(t=0;t<T;t++){
        int i,j,count=0;

        scanf("%d%d%d",&m,&n,&k);

        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                map[j][i]=0;
        }

        for(i=0;i<k;i++){
            int x,y;
            scanf("%d%d",&x,&y);
            map[x][y]=1;
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(map[j][i]==1){
                    count++;
                    del(j,i);
                }
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
