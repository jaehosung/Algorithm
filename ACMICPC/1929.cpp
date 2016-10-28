#include<iostream>
#include<cstdio>
using namespace std;

const int MAXX = 1000000;
int vec[MAXX+1] = {0,};

int main(){
    int n,m;
    int num = 0;
    cin>>n>>m;



    vec[1] = 1;

    for(int i = 2; i*i <= m; i++){
        if(vec[i] == 0){
            vec[i] = 2;
            for(int j = i*2; j <=m;j= j+=i){
                vec[j]=1;
            }
        }
    }


    for(int i = n;  i<= m; i++){
        if(vec[i]!=1)
            printf("%d\n",i);
    }
    return 0;
}
