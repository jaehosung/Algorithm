#include<stdio.h>
//MergeSort
typedef struct{
    int x;
    int y;
}Point;

Point a[100000];
Point b[100000];

void swap(int ix1, int ix2){
    int temp;
    temp = a[ix1].x;
    a[ix1].x=a[ix2].x;
    a[ix2].x=temp;

    temp = a[ix1].y;
    a[ix1].y=a[ix2].y;
    a[ix2].y=temp;
}

int isBigger(int ix1, int ix2){
    if(a[ix1].x>a[ix2].x)
        return 1;
    else if(a[ix1].x==a[ix2].x&&a[ix1].y>a[ix2].y)
        return 1;
    else
        return 0;
}
void subsAtoB(int ixA, int ixB){
    b[ixB].x = a[ixA].x;
    b[ixB].y = a[ixA].y;
}

void subsBtoA(int ixB, int ixA){
    a[ixA].x = b[ixB].x;
    a[ixA].y = b[ixB].y;
}

void mergeSort(int low, int high){
    if(low==high){
        return;
    }else if(low+1 == high){
        if(isBigger(low,high)){
            swap(low,high);
        }
        return;
    }

    int mid = (low+high)/2;
    mergeSort(low,mid);
    mergeSort(mid+1,high);

    int i = low;
    int j = mid+1;
    int k = 0;
    int itr;
    while(i<=mid&&j<=high){
        if(isBigger(i,j)){
            subsAtoB(j,k);
            j++;
        }else{
            subsAtoB(i,k);
            i++;
        }
        k++;
    }
    while(i<=mid){
        subsAtoB(i,k);
        i++;
        k++;
    }
    while(j<=high){
        subsAtoB(j,k);
        j++;
        k++;
    }
    for(itr = 0; itr < k; itr++){
        subsBtoA(itr,low+itr);
    }
}

int main(){
    int n,i;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d %d",&a[i].x,&a[i].y);
    }

    mergeSort(0,n-1);

    for(i=0; i<n; i++){
        printf("%d %d\n",a[i].x,a[i].y);
    }
    return 0;
}
