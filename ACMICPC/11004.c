#include<stdio.h>

int a[5000001];
int k;

void swap(int ix1, int ix2){
    int temp;
    temp = a[ix1];
    a[ix1] = a[ix2];
    a[ix2] = temp;
}
int partition(int low, int high){
    int pivot = (low+high)/2;
    int pivotValue = a[pivot];
    int i,j=low;

    swap(pivot,high);
    for(i=low; i<high; i++){
        if(a[i]<pivotValue){
            swap(j,i);
            j++;
        }
    }
    swap(j,high);
    return j;
}

void qsort(int low, int high){
    if(low<high){
        int pivot = partition(low,high);
        if(pivot==k-1){
            return;
        }else if(k-1>pivot){
            qsort(pivot+1,high);
        }else{
            qsort(low,pivot-1);
        }
    }
}
int main(){
    int i,n;
    int max = 0;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    qsort(0,n-1);

    printf("%d\n",a[k-1]);

    return 0;
}
