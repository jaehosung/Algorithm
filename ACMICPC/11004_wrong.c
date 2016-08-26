#include<stdio.h>

int a[5000001];
int b[5000001];

void swap(int ix1, int ix2){
    int temp;
    temp = a[ix1];
    a[ix1] = a[ix2];
    a[ix2] = temp;
}
void mergesort(int low, int high){
    if(low == high){
        return;
    }else if(high == low+1){
        if(a[high] < a[low]){
            swap(low,high);
        }
        return;
    }

    int mid = (low+high)/2;
    mergesort(low,mid);
    mergesort(mid+1,high);

    int itr;
    int i = low;
    int j = mid+1;
    int k = 0;
    while( i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k] = a[i];
            k++;
            i++;
        }else{
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while( i <= mid){
        b[k] = a[i];
        k++;
        i++;
    }
    while( j <= high){
        b[k] = a[j];
        k++;
        j++;
    }
    for(itr = 0; itr < k; itr++){
        a[low+itr] = b[itr];
    }
}

int main(){
    int i,n,k;
    int max = 0;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    mergesort(0,n-1);

    printf("%d\n",a[k-1]);

    return 0;
}
