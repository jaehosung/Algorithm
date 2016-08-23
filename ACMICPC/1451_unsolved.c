#include<stdio.h>
int Map[101][101]; //first index "N" second index "M"
long long Sum[101][101];
long long sumfunction(int x1,int y1, int x2, int y2){
    return Sum[x2][y2]-Sum[x1-1][y2]-Sum[x2][y1-1]+Sum[x1-1][y1-1];
}
int main(){
    int N,M,i,j,k;
    int l,m;
    long long max = 0 ;
    long long totalSum=0;
    scanf("%d%d",&N,&M);
    for(i=0; i <= N; i++){
        for(j = 0; j <= M; j++){
            Sum[i][j] = 0;
            Map[i][j] = 0;
        }
    }

    for(i=1; i <= N; i++){
        for(j = 1; j <= M; j++){
            scanf("%1d",&Map[i][j]);
            totalSum += (long long)Map[i][j];
        }
    }


    for(i=1; i<=N; i++){
        for(j = 1; j <= M; j++){
            long long mSum=0;
            for(l = 1; l <= i; l++){
                for(m = 1; m <= j; m++){
                    mSum += (long long)Map[l][m];
                }
            }
            Sum[i][j] = mSum;
        }
    }

    //frequently used operation -> Make a new function
    //in this case -> Sum
    long long sum0,sum1,sum2;
    //divided part top, bottom, left, right. vertical, horizontal
    //top bottom left right
    for(i = 1; i <= N-1; i++){
        for(j = 1; j <= M-1; j++){

            sum0 = sumfunction(1,1,i,j);
            sum1 = sumfunction(1,j+1,i,M);
            sum2 = totalSum - sum0 - sum1;
            if(sum0*sum1*sum2 > max)
                max = sum0*sum1*sum2;

            sum0 = sumfunction(1,1,i,j);
            sum1 = sumfunction(i+1,1,N,j);
            sum2 = totalSum - sum0 - sum1;
            if(sum0*sum1*sum2 > max)
                max = sum0*sum1*sum2;

            sum0 = sumfunction(1,j+1,i,M);
            sum1 = sumfunction(i+1,j+1,N,M);
            sum2 = totalSum - sum0 - sum1;
            if(sum0*sum1*sum2 > max)
                max = sum0*sum1*sum2;

            sum0 = sumfunction(i+1,1,N,j);
            sum1 = sumfunction(i+1,j+1,N,M);
            sum2 = totalSum - sum0 - sum1;
            if(sum0*sum1*sum2 > max)
                max = sum0*sum1*sum2;
        }
    }
    //vertical horizontal;
    for(i = 1; i <=N-2; i++){
        for(j = i + 1; j<=N-1; j++){
            sum0 = sumfunction(1,1,i,M);
            sum1 = sumfunction(i+1,M,j,M);
            sum2 = totalSum - sum0 - sum1;
            if(sum0*sum1*sum2 > max)
                max = sum0*sum1*sum2;

        }
    }
    for(i=1; i <=M-2; i++){
        for(j = i+1; j<=M-1; j++){
            sum0 = sumfunction(1,1,N,i);
            sum1 = sumfunction(N,i+1,N,j);
            sum2 = totalSum - sum0 - sum1;
            if(sum0*sum1*sum2 > max)
                max = sum0*sum1*sum2;

        }
    }
    printf("%lld\n",max);

    return 0;
 }
