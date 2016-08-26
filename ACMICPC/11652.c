#include<stdio.h>

long long a[1000000];
long long b[1000000];

void swap(int ix1, int ix2){
    long long temp;
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
    int i,n;
    int max = 0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%lld",&a[i]);
    }

    mergesort(0,n-1);

    long long prev = a[0];
    long long maxvalue = a[0];
    int cnt = 1;
    for(i=1; i<n; i++){
        if(prev == a[i]){
            cnt ++;
        }else{
            prev = a[i];
            cnt = 1;
        }

        if(max < cnt){
            max = cnt;
            maxvalue = a[i];
        }
    }

    printf("%lld\n",maxvalue);

    return 0;
}
