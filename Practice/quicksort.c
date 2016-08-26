#include<stdio.h>
int arr[1000000];
int n;
void swap(int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int chosepivot(int low, int high){
    return low + (high-low)/2;
}


int partition(int low, int high){
    int pivot = chosepivot(low,high);
    int itr;
    int pivotValue = arr[pivot];
    int srcValue = low;
    swap(high,pivot);
    for(itr = low; itr < high; itr++){
        if(pivotValue > arr[itr]){
            swap(srcValue,itr);
            srcValue++;
        }
    }
    swap(high,srcValue);
    return srcValue;
}


void quicksort(int low, int high){

    if(low<high){
        int pivot = partition(low,high);
        quicksort(low,pivot-1);
        quicksort(pivot+1,high);
    }
}

int main(){
    int i;
    scanf("%d",&n);
    for( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    quicksort(0,n-1);
    for( i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
