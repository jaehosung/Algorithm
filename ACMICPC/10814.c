#include<stdio.h>
//MergeSort
typedef struct{
    int x;
    int age;
}Person;

Person a[100001];
Person b[100001];
char name[100001][101];

void swap(int ix1, int ix2){
    int temp;
    temp = a[ix1].x;
    a[ix1].x=a[ix2].x;
    a[ix2].x=temp;

    temp = a[ix1].age;
    a[ix1].age=a[ix2].age;
    a[ix2].age=temp;
}

int isBigger(int ix1, int ix2){
    if(a[ix1].age>a[ix2].age)
        return 1;
    else
        return 0;
}
void subsAtoB(int ixA, int ixB){
    b[ixB].x = a[ixA].x;
    b[ixB].age = a[ixA].age;
}

void subsBtoA(int ixB, int ixA){
    a[ixA].x = b[ixB].x;
    a[ixA].age = b[ixB].age;
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
        a[i].x = i;
        scanf("%d %s",&a[i].age,name[i]);
    }

    mergeSort(0,n-1);

    for(i=0; i<n; i++){
        printf("%d %s\n",a[i].age,name[a[i].x]);
    }
    return 0;
}
