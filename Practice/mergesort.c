#include<stdio.h>
int a[10000001];
int b[10000001];

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
        if(a[high]<a[low]){
            swap(low,high);
        }
        return;
    }

    int mid = (high+low)/2;


    mergesort(low,mid);
    mergesort(mid+1,high);

    int i = low;
    int j = mid+1;
    int k = 0;
    int itr;
    while(i<=mid&&j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=high){
        b[k]=a[j];
        k++;
        j++;
    }
    for(itr = 0; itr < k; itr++){
        a[itr+low] = b[itr];
    }
}
int main(){
    int n,i;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    mergesort(0,n-1);

    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
