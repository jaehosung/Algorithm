#include<stdio.h>
int arr[13]={0,};
int printArr[6]={0,};
int n;

void dfs(int count,int last, int _arr[]){
    int i;
    if(count<6){
        count++;
        last++;

        for(i=last; i<=last+(n-(last+1))-(6-count);i++){
            _arr[count-1] = arr[i];
            dfs(count,i,_arr);
        }

    }else if(count == 6){
        for(i=0; i<6; i++){
            printf("%d ",_arr[i]);
        }
        printf("\n");
    }
}

int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //print 6 numbers using dfs
    dfs(0,-1,printArr);
    return 0;
}
