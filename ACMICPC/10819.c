#include<stdio.h>
int diffMax = 0;
int arr[9];

int difference(int a, int b){
    if(arr[a]>arr[b])
        return arr[a]-arr[b];
    else
        return arr[b]-arr[a];
}

int totalDifference(int n){
    int i;
    int sum=0;
    for (i =0; i < n-1; i++){
        sum +=difference(i,i+1);
    }
    return sum;
}
void swap(int i, int j){
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void permutation(int start, int end, int n){
    int i;
    if(start==end){
        if(diffMax<totalDifference(n)){
            diffMax = totalDifference(n);
        }
    }else{
        for(i=start; i<end; i++){
        swap(start,i);
        permutation(start+1,end,n);
        swap(start,i);
    }
    }

}

int main(){
    int n,i,j;
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n-1; i++){
        for(j=i+1; j<n; j++){
            permutation(0,n,n);
        }
    }

    printf("%d\n",diffMax);
    return 0;
}
